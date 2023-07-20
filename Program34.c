#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", (iCnt * iNo));
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    Table(iNo);

    return 0;
}