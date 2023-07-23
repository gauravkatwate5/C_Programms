#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    DisplayDigit(iNo);

    return 0;
}