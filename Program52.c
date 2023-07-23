#include <stdio.h>
#include <stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;
    bool Flag = false;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            Flag = true;
        }
        iNo = iNo / 10;
    }
    return Flag;
}

int main()
{
    int iNo = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    if (CheckZero(iNo))
    {
        printf("Given Number Contain Zero\n");
    }
    else
    {
        printf("Given Number Not Contain Zero\n");
    }

    return 0;
}