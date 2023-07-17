#include <stdio.h>
#include <stdbool.h>

bool CheckNumber(int iNo)
{
    if (iNo > 100)
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

    bRet = CheckNumber(iNo);

    if (bRet == true)
    {
        printf("Given Number Is Greater Then 100");
    }
    else
    {
        printf("Given Number Is Smaller Then 100");
    }

    return 0;
}