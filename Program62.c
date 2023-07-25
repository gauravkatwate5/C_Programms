#include <stdio.h>
#include <stdlib.h>

void DivisibleBy5(int *Arr, int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (*Arr % 5 == 0)
        {
            printf("%d\t", *Arr);
        }
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
        printf("Cannot Alocate the Memory \n");
        return -1;
    }

    printf("Enter The Elements : \n");

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    DivisibleBy5(Arr, iNo);

    free(Arr);

    return 0;
}