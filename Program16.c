#include <stdio.h>
int MultFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // // Time Complexity : O(N)
    // for (iCnt = 1; iCnt < iNo; iCnt++)
    // {
    //     if ((iNo % iCnt) == 0)
    //     {
    //         iMult = iMult * iCnt;
    //     }
    // }

    // Time Complexity : O(N/2)
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    iRet = MultFact(iNo);

    printf("Given Number Factors Multiplication is : %d\n", iRet);

    return 0;
}