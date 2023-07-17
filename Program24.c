#include <stdio.h>

int NumbersMult(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    if (iNo1 == 0)
    {
        iNo1 = 1;
    }
    if (iNo2 == 0)
    {
        iNo2 = 1;
    }
    if (iNo3 == 0)
    {
        iNo3 = 1;
    }

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iNo3 = 0, iRet = 0;

    printf("Enter First Number : \n");
    scanf("%d", &iNo1);

    printf("Enter Second Number : \n");
    scanf("%d", &iNo2);

    printf("Enter Third Number : \n");
    scanf("%d", &iNo3);

    iRet = NumbersMult(iNo1, iNo2, iNo3);

    printf("Multiplication of Given Three Numbers Is : %d", iRet);

    return 0;
}