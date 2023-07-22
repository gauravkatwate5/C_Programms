#include <stdio.h>

int RangeSumEven(int iNo1, int iNo2)
{
    int iCnt = 0, iAns = 0;

    if (iNo1 > iNo2 || iNo1 < 0)
    {
        printf("Invalid Range \n");
        return 0;
    }

    // // time Complexity : O(N)
    // for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    // {
    //     if (iCnt % 2 == 0)
    //     {
    //         iAns = iAns + iCnt;
    //     }
    // }

    if (iNo1 % 2 != 0)
    {
        iNo1 = iNo1 + 1;
    }
    // // time Complexity : O(N/2)
    for (iCnt = iNo1; iCnt <= iNo2; iCnt = iCnt + 2)
    {
        if (iCnt % 2 == 0)
        {
            iAns = iAns + iCnt;
        }
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

    iRet = RangeSumEven(iNo1, iNo2);

    printf("Sum of Given Range Even Number Is : %d", iRet);

    return 0;
}