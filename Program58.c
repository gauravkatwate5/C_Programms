#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit >= 3) && (iDigit <= 7))
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

    iRet = CountRange(iNo);

    printf("count of Digits between 3 to 7 is %d times\n", iRet);

    return 0;
}