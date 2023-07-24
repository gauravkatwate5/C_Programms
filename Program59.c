#include <stdio.h>

int DigitMult(int iNo)
{
    int iDigit = 0, iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            iDigit = 1;
        }
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    iRet = DigitMult(iNo);

    printf("Multiplication of Digits given number is %d\n", iRet);

    return 0;
}