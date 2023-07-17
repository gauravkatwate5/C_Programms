#include <stdio.h>

int NonFactSum(int iNo)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter A Number : ");
    scanf("%d", &iNo);

    iRet = NonFactSum(iNo);

    printf("Summetion of Given Numbers Non Factors Is : %d", iRet);
    return 0;
}