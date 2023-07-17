#include <stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    // // Time Complexity : O(N)
    // for (iCnt = (iNo - 1); iCnt >= 1; iCnt--)
    // {
    //     if ((iNo % iCnt) == 0)
    //     {
    //         printf("%d\t", iCnt);
    //     }
    // }

    // Time Complexity : O(N/2)
    for (iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iNo = 0;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    DisplayFactors(iNo);

    return 0;
}