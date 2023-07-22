#include <stdio.h>
int KMToMeter(int iValue)
{
    int iMeter = 0.0;

    iMeter = iValue * 1000;

    return iMeter;
}

int main()
{
    int iLength = 0, iRet = 0;

    printf("Enter The Distance in Kilometer : \n");
    scanf("%d", &iLength);

    iRet = KMToMeter(iLength);

    printf("Distance in Meter is : %d meter", iRet);

    return 0;
}