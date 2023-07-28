#include <stdio.h>

void Reverse(char *str)
{
    int i = 0, j = 0;
    char temp = '\0';

    while (str[i] != '\0')
    {
        i++;
    }

    i = i - 1;

    while (i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }
}

int main()
{
    char str[30];

    printf("Enter A String : \n");
    scanf("%[^\n]s", str);

    Reverse(str);

    return 0;
}