#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int *Arr, int iLength, int iNo)
{
    int iCnt = 0, Flag = -1;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (*Arr == iNo)
        {
            Flag = iCnt;
            break;
        }
        Arr++;
    }

    return Flag;
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

    printf("Enter The Number : \n");
    scanf("%d", &iNo1);

    iRet = FirstOcc(Arr, iNo, iNo1);

    if (iRet == -1)
    {
        printf("%d Not Available int the Array \n", iNo1);
    }
    else
    {
        printf("First Occurence of %d number is %d index\n", iNo1, iRet);
    }

    free(Arr);

    return 0;
}