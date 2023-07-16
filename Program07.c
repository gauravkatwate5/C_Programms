#include <stdio.h>

void Display(int iCnt)
{
    while (iCnt != 0)
    {
        printf("*\t");
        iCnt--;
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