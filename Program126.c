#include <stdio.h>
#include <stdbool.h>

bool CheckChar(char *str, char ch)
{
    bool flag = false;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            flag = true;
        }
        str++;
    }

    return flag;
}

int main()
{
    char str[30], ch = '\0';
    bool bRet = 0;

    printf("Enter A String : \n");
    scanf("%[^\n]s", str);

    printf("Enter One Character to search : \n");
    scanf(" %c", &ch);

    bRet = CheckChar(str, ch);

    if (bRet == true)
    {
        printf("Given Character is present");
    }
    else
    {
        printf("Given Character is Not present");
    }

    return 0;
}
