#include <stdio.h>

int CountWhitaSpace(char *str)
{
    int i = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            i++;
        }
        str++;
    }

    return i;
}

int main()
{
    char str[30];
    int ret = 0;

    printf("Enter A String : \n");
    scanf("%[^\n]s", str);

    ret = CountWhitaSpace(str);

    printf("Count of white spaces is : %d", ret);

    return 0;
}
