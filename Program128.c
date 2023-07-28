#include <stdio.h>

int CountChar(char *str, char ch)
{
    int i = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }
        i++;
        str++;
    }

    if (*str == '\0')
    {
        i = -1;
    }

    return i;
}

int main()
{
    char str[30], ch = '\0';
    int ret = 0;

    printf("Enter A String : \n");
    scanf("%[^\n]s", str);

    printf("Enter One Character to search : \n");
    scanf(" %c", &ch);

    ret = CountChar(str, ch);

    printf("Index of Given Character is : %d ", ret);

    return 0;
}
