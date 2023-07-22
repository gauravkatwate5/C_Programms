#include <stdio.h>
double AreaOfRactrangle(float fValue1, float fValue2)
{
    double Area = 0.0;

    Area = fValue1 * fValue2;

    return Area;
}

int main()
{
    float height = 0.0f, width = 0.0f;
    double dRet = 0.0;

    printf("Enter The height of ractrangle : \n");
    scanf("%f", &height);

    printf("Enter The width of ractrangle : \n");
    scanf("%f", &width);

    dRet = AreaOfRactrangle(height, width);

    printf("Area Of Rectrangle is : %lf", dRet);
    return 0;
}