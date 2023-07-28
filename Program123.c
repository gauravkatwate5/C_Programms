#include <stdio.h>

void strtoggleX(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
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

    printf("%s", str);

    return 0;
}
