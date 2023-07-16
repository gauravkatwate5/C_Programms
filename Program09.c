#include <stdio.h>

void Display(int iData, int iFrequncy)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iFrequncy; iCnt++)
    {
        printf("%d\t", iData);
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter First Number To Print : \n");
    scanf("%d", &iNo1);

    printf("Enter Second Number To How Times Print : \n");
    scanf("%d", &iNo2);

    Display(iNo1, iNo2);

    return 0;
}