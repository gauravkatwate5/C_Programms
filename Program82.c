#include <stdio.h>

void Pattern(int iNo)
{
    while (iNo != 0)
    {
        printf("%d\t#\t", iNo);
        iNo--;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    Pattern(iNo);

    return 0;
}