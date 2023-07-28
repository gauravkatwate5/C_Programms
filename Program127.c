#include <stdio.h>

int CountChar(char *str, char ch)
{
    int i = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            i++;
        }
        str++;
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

    printf("Count of Given Character is : %d times", ret);

    return 0;
}
