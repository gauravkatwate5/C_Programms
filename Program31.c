#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Greter\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    OddDisplay(iNo);
    return 0;
}