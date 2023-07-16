#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    bRet = CheckEvenOdd(iNo);

    if (bRet == true)
    {
        printf("Given Number Is Even \n");
    }
    else
    {
        printf("Given Number Is Odd \n");
    }

    return 0;
}