#include <stdio.h>
double AreaOfCircle(float fValue)
{
    double Area = 0.0;

    Area = fValue * fValue * 3.14;

    return Area;
}

int main()
{
    float fRad = 0.0f;
    double dRet = 0.0;

    printf("Enter The Radius of Circle : \n");
    scanf("%f", &fRad);

    dRet = AreaOfCircle(fRad);

    printf("Area Of Circle is : %lf", dRet);
    return 0;
}