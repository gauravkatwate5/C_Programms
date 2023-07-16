#include <stdio.h>

void Display(int iCnt)
{
    if (iCnt < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}