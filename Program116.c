#include <stdio.h>

int countCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
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

    iRet = countCapital(str);

    printf("Capital character count is : %d", iRet);
    return 0;
}