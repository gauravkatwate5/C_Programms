#include <stdio.h>
#include <stdlib.h>

void Digit(int *Arr, int iLength)
{
    int iCnt = 0, iTemp = 0, i = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iTemp = *Arr;

        while (iTemp != 0)
        {
            i++;
            iTemp = iTemp / 10;
        }

        if (i == 3)
        {
            printf("%d\t", *Arr);
        }
        i = 0;
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

    Digit(Arr, iNo);

    free(Arr);

    return 0;
}