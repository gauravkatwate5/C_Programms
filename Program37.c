#include <stdio.h>

int DollerToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    iRet = DollerToINR(iNo);

    printf("Value in INR Is : %d", iRet);

    return 0;
}