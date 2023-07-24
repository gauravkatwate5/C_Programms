#include <stdio.h>

int DigitSumDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iEvenSum - iOddSum;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    iRet = DigitSumDiff(iNo);

    printf("Difference of Even digit sum and odd digit sum is %d\n", iRet);

    return 0;
}