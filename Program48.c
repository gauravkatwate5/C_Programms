#include <stdio.h>

int RangeSum(int iNo1, int iNo2)
{
    int iCnt = 0, iAns = 0;

    if (iNo1 > iNo2 || iNo1 < 0)
    {
        printf("Invalid Range \n");
        return 0;
    }

    // // time Complexity : O(N)
    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        iAns = iAns + iCnt;
    }

    return iAns;
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iRet = 0;

    printf("Enter First Number : \n");
    scanf("%d", &iNo1);

    printf("Enter Second Number : \n");
    scanf("%d", &iNo2);

    iRet = RangeSum(iNo1, iNo2);

    printf("Sum of Given Range Number Is : %d", iRet);

    return 0;
}