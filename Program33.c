#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    iRet = Factorial(iNo);

    printf("Factorial is : %d\n", iRet);
    return 0;
}