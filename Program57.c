#include <stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    iRet = CountOdd(iNo);

    printf("count of odd Digits is %d times\n", iRet);

    return 0;
}