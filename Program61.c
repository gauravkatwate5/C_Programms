#include <stdio.h>
#include <stdlib.h>

int EvenOddSum(int Arr[], int iSize)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else if (Arr[iCnt] % 2 != 0)
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    return iOddSum - iEvenSum;
}

int main()
{
    int iNo = 0, iRet = 0, iCnt = 0;
    int *Arr = NULL;

    printf("Enter The Count of Element : \n");
    scanf("%d", &iNo);

    Arr = (int *)malloc(sizeof(int) * iNo);

    if (Arr == NULL)
    {
        printf("Cannot Alocate the Memory \n");
        return -1;
    }

    printf("Enter The Elements : \n");

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    iRet = EvenOddSum(Arr, iNo);

    printf("Diffrence of Even and Odd Element Sum is : %d", iRet);

    free(Arr);

    return 0;
}