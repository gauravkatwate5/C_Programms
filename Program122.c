#include <stdio.h>

void struprX(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char str[30];

    printf("Enter A String : \n");
    scanf("%[^\n]s", str);

    struprX(str);

    printf("%s", str);

    return 0;
}
