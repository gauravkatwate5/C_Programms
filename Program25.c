#include <stdio.h>

float Percentage(float iNo1, float iNo2)
{
    float fAns = 0.0;

    fAns = (iNo2 * 100) / iNo1;

    return fAns;
}

int main()
{
    float iTotal = 0, iObtained = 0;
    float fret = 0.0;

    printf("Enter Total Marks : \n");
    scanf("%d", &iTotal);

    printf("Enter Obtained Marks : \n");
    scanf("%d", &iObtained);

    fret = Percentage(iTotal, iObtained);

    printf("Persentage of student is : %f%%", fret);

    return 0;
}