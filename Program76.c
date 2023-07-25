#include <stdio.h>
#include <stdlib.h>

int Maximum(int *Arr, int iLength)
{
    int iCnt = 0, iMax = *Arr;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (iMax < *Arr)
        {
            iMax = *Arr;
        }
        Arr++;
    }

    return iMax;
}

int main()
{
    int iNo = 0, iCnt = 0, iNo1 = 0, iRet = 0;
    int *Arr = NULL;

    printf("Enter The Count of Element : \n");
    scanf("%d", &iNo);

    Arr = (int *)malloc(sizeof(int) * iNo);

    if (Arr == NULL)
    {
        printf("Cannot Alocate memory for Element\n");
        return -1;
    }

    printf("Enter The Elements : \n");

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    iRet = Maximum(Arr, iNo);

    printf("Maximum element is %d \n", iRet);

    free(Arr);

    return 0;
}