#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1, iCnt = 0;

    if (iNo < 0)
    {
        iNo = -(iNo);
    }

    //// time complexity : O(N)
    // for (iCnt = 1; iCnt <= iNo; iCnt++)
    // {
    //     if (iCnt % 2 == 0)
    //     {
    //         iFact = iFact * iCnt;
    //     }
    // }

    // time complexity : O(N/2)
    for (iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        if (iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    iRet = EvenFactorial(iNo);

    printf("Even Factorial of Given Number Is : %d", iRet);

    return 0;
}