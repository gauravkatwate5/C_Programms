#include <stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    // Time Complexity : O(N)
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
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