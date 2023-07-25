#include <stdio.h>
#include <stdlib.h>

void Range(int *Arr, int iLength, int Start, int End)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((*Arr >= Start) && (*Arr <= End))
        {
            printf("%d\t", *Arr);
        }
        Arr++;
    }
}

int main()
{
    int iNo = 0, iCnt = 0, iStart = 0, iEnd = 0;
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

    printf("Enter The Start Point : \n");
    scanf("%d", &iStart);

    printf("Enter The End Point : \n");
    scanf("%d", &iEnd);

    Range(Arr, iNo, iStart, iEnd);

    free(Arr);

    return 0;
}