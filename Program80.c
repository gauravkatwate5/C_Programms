#include <stdio.h>
#include <stdlib.h>

void DigitSum(int *Arr, int iLength)
{
    int iCnt = 0, iTemp = 0, iSum = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iTemp = *Arr;

        while (iTemp != 0)
        {
            iSum = iSum + (iTemp % 10);
            iTemp = iTemp / 10;
        }

        printf("%d\t", iSum);
        iSum = 0;
        Arr++;
    }
}

int main()
{
    int iNo = 0, iCnt = 0;
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

    DigitSum(Arr, iNo);

    free(Arr);

    return 0;
}