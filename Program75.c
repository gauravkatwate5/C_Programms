#include <stdio.h>
#include <stdlib.h>

int OddProduct(int *Arr, int iLength)
{
    int iCnt = 0, mult = 1;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (*Arr % 2 != 0)
        {
            mult = mult * (*Arr);
        }
        Arr++;
    }

    return mult;
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

    iRet = OddProduct(Arr, iNo);

    printf("Product of all odd element is %d \n", iRet);

    free(Arr);

    return 0;
}