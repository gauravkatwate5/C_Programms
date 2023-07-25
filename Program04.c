#include <stdio.h>
#include <stdbool.h>

bool Check(int iNo)
{
    if (iNo % 5 == 0)
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
    int iNo = 0;

    printf("Enter Any Number : \n");
    scanf("%d", &iNo);

    if (Check(iNo))
    {
        printf("Given Number Divisible by 5\n");
    }
    else
    {
        printf("Given Number Not Divisible by 5\n");
    }

    return 0;
}