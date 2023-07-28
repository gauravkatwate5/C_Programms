#include <stdio.h>

int countSmall(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    int iRet = 0;
    char str[30];

    printf("Enter A String : \n");
    scanf("%[^\n]s", &str);

    iRet = countSmall(str);

    printf("Small character count is : %d", iRet);
    return 0;
}