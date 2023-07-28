#include <stdio.h>

int DiffCapSml(char *str)
{
    int iSmallCnt = 0, iCapitalCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCapitalCnt++;
        }
        str++;
    }

    return iCapitalCnt - iSmallCnt;
}

int main()
{
    int iRet = 0;
    char str[30];

    printf("Enter A String : \n");
    scanf("%[^\n]s", str);

    iRet = DiffCapSml(str);

    printf("Diffrence between Small and Capital character is : %d", iRet);
    return 0;
}