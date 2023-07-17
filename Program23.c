#include <stdio.h>
#include <stdbool.h>

bool CheckEqual(int ino1, int ino2)
{
    if (ino1 == ino2)
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
    int iNo1 = 0, iNo2 = 0;
    bool bRet = false;

    printf("Enter First Number : \n");
    scanf("%d", &iNo1);

    printf("Enter Second Number : \n");
    scanf("%d", &iNo2);

    bRet = CheckEqual(iNo1, iNo2);

    if (bRet == true)
    {
        printf("Given Numbers Are Equal \n");
    }
    else
    {
        printf("Given Numbers Are Not Equal \n");
    }

    return 0;
}