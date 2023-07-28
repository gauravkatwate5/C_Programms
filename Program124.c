#include <stdio.h>

void strtoggleX(char *str)
{
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char str[30];

    printf("Enter A String : \n");
    scanf("%[^\n]s", str);

    strtoggleX(str);

    return 0;
}
