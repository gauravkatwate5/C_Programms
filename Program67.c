#include <stdio.h>
#include <stdlib.h>

int DiffEvenOdd(int *Arr, int iLength)
{
    int iCnt = 0, FrequncyEven = 0, FrequncyOdd = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (*Arr % 2 == 0)
        {
            FrequncyEven++;
        }
        else
        {
            FrequncyOdd++;
        }
        Arr++;
    }

    return FrequncyEven - FrequncyOdd;
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

    iRet = DiffEvenOdd(Arr, iNo);

    printf("diffrence in Friquncy of Even And Odd Numbers is : %d", iRet);

    free(Arr);

    return 0;
}