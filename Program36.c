#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -(iNo);
    }

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        if (iCnt < 0)
        {
            printf("*\t");
        }
        else if (iCnt > 0)
        {
            printf("#\t");
        }
    }
}

int main()
{
    int iNo = 0;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    Display(iNo);
    return 0;
}