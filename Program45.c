#include <stdio.h>
float FeetToMeter(int iValue)
{
    float fMeter = 0.0f;

    fMeter = iValue * 0.0929;

    return fMeter;
}

int main()
{
    int iFeet = 0;
    float fRet = 0;

    printf("Enter The Area In Squere Feet : \n");
    scanf("%d", &iFeet);

    fRet = FeetToMeter(iFeet);

    printf("Area in Squere Meter is : %lf Squere meter", fRet);

    return 0;
}