#include <stdio.h>

void Display(int iTemp)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iTemp; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Any Number : ");
    scanf("%d", &iNo);

    Display(iNo);
    return 0;
}