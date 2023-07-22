#include <stdio.h>
double FharToCel(float fValue)
{
    double Temp = 0.0;

    Temp = ((fValue - 32) * 0.555555);

    return Temp;
}

int main()
{
    float fTemp = 0.0f;
    double dRet = 0.0;

    printf("Enter The Temprature in Fharanite : \n");
    scanf("%f", &fTemp);

    dRet = FharToCel(fTemp);

    printf("Temprature in Celcius in : %lf celsius", dRet);

    return 0;
}