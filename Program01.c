#include <stdio.h>

int Divide(int iNum1, int iNum2)
{
    int iAns = 0;

    if ((iNum1 < iNum2))
    {
        return -1;
    }

    iAns = iNum1 / iNum2;

    return iAns;
}

int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iRet = 0;

    printf("Enter First Number => \n");
    scanf("%d", &iNo1);

    printf("Enter Second Number => \n");
    scanf("%d", &iNo2);

    iRet = Divide(iNo1, iNo2);

    printf("Division of Given Two Numbers Is : %d", iRet);

    return 0;
}