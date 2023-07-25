#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check11(int *Arr, int iLength, int iNo)
{
    int iCnt = 0;
    bool Flag = false;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (*Arr == iNo)
        {
            Flag = true;
        }
        Arr++;
    }

    return Flag;
}

int main()
{
    int iNo = 0, iCnt = 0, iNo1 = 0;
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

    printf("Enter The Number : \n");
    scanf("%d", &iNo1);

    if (Check11(Arr, iNo, iNo1))
    {
        printf("%d is prsent\n", iNo1);
    }
    else
    {
        printf("%d is Absent\n", iNo1);
    }

    free(Arr);

    return 0;
}