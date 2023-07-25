#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check11(int *Arr, int iLength)
{
    int iCnt = 0;
    bool Flag = false;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (*Arr == 11)
        {
            Flag = true;
        }
        Arr++;
    }

    return Flag;
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

    if (Check11(Arr, iNo))
    {
        Printf("11 is prsent\n");
    }
    else
    {
        Printf("11 is Absent\n");
    }

    free(Arr);

    return 0;
}