#include <stdio.h>

void PrintFact(int iNo)
{
    int iCnt = 0;

    // Updater
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Time Complexity : O(N)
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }

    // // Time Complexity : O(N/2)
    // for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    // {
    //     if ((iNo % iCnt) == 0)
    //     {
    //         printf("%d\t", iCnt);
    //     }
    // }
}

int main()
{
    int iNo = 0;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    PrintFact(iNo);

    return 0;
}