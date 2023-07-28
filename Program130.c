#include <stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;

    char temp = '\0';

    while (*end != '\0')
    {
        end++;
    }

    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        end--;
        start++;
    }
}

int main()
{
    char str[30];

    printf("Enter A String : \n");
    scanf("%[^\n]s", str);

    Reverse(str);

    printf("reverse string is : %s", str);

    return 0;
}
