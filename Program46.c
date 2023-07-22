#include <stdio.h>

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;

    if (iNo1 > iNo2)
    {
        printf("Invalid Range \n");
        return;
    }

    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        printf("%d \t", iCnt);
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter First Number : \n");
    scanf("%d", &iNo1);

    printf("Enter Second Number : \n");
    scanf("%d", &iNo2);

    Display(iNo1, iNo2);

    return 0;
}