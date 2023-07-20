#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -(iNo);
    }

    // time complexity : O(N)
    //  for (iCnt = 1; iCnt <= iNo; iCnt++)
    //  {
    //      if (iCnt % 2 != 0)
    //      {
    //          printf("%d\t", iCnt);
    //      }
    //  }

    // time complexity : O(N/2)
    for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    OddDisplay(iNo);
    return 0;
}