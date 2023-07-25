#include <stdio.h>
#include <stdlib.h>

int CountEven(int *Arr, int iLength)
{
    int iCnt = 0, Frequncy = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (*Arr % 2 == 0)
        {
            Frequncy++;
        }
        Arr++;
    }

    return Frequncy;
}

int main()
{
    int iNo = 0, iCnt = 0, iRet = 0;
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

    iRet = CountEven(Arr, iNo);

    printf("Friquncy of Even Number is : %d", iRet);

    free(Arr);

    return 0;
}