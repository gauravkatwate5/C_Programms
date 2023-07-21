#include <stdio.h>

int OddFactorial(int iNo)
{
    int iOddFact = 1, iEvenFact = 1, iCnt = 0;

    if (iNo < 0)
    {
        iNo = -(iNo);
    }

    //// time complexity : O(N)
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iOddFact - iEvenFact);
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    iRet = OddFactorial(iNo);

    printf("Odd Factorial of Given Number Is : %d", iRet);

    return 0;
}