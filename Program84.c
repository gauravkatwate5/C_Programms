#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t", iCnt);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    Pattern(iNo);

    return 0;
}