#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;

    if (iNo1 > iNo2)
    {
        printf("Invalid Range \n");
        return;
    }

    // // time Complexity : O(N)
    // for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    // {
    //     if (iCnt % 2 == 0)
    //     {
    //         printf("%d \t", iCnt);
    //     }
    // }

    if (iNo1 % 2 != 0)
    {
        iNo1 = iNo1 + 1;
    }

    // time Complexity : O(N/2)
    for (iCnt = iNo1; iCnt <= iNo2; iCnt = iCnt + 2)
    {
        printf("%d \t", iCnt);
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter First Number : \n");
    scanf("%d", &iNo1);

    printf("Enter Second Number : \n");
    scanf("%d", &iNo2);

    Display(iNo1, iNo2);

    return 0;
}