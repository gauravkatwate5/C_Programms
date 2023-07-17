#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iFSum = 0, iNFSum = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iNFSum = iNFSum + iCnt;
        }
        else
        {
            iFSum = iFSum + iCnt;
        }
    }
    return iNFSum - iFSum;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter A Number : ");
    scanf("%d", &iNo);

    iRet = FactDiff(iNo);

    printf("Diffrence of Given Number Factors and Nu=on factors summetion: %d", iRet);
    return 0;
}