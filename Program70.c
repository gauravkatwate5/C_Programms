#include <stdio.h>
#include <stdlib.h>

int FrequncyOf11(int *Arr, int iLength, int iNo)
{
    int iCnt = 0, Frequncy = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (*Arr == iNo)
        {
            Frequncy++;
        }
        Arr++;
    }

    return Frequncy;
}

int main()
{
    int iNo = 0, iCnt = 0, iRet = 0, iNo1 = 0;
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

    printf("Enter One Number To Check Frequncy Of That Number : \n");
    scanf("%d", &iNo1);

    iRet = FrequncyOf11(Arr, iNo, iNo1);

    printf("Friquncy of %d is : %d Times", iNo1, iRet);

    free(Arr);

    return 0;
}