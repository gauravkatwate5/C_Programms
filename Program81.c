#include <stdio.h>

void DisplayChar(int iNo)
{
    char ch = 'A';

    while (iNo != 0)
    {
        printf("%c\t", ch);
        ch++;
        iNo--;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter A Number : \n");
    scanf("%d", &iNo);

    DisplayChar(iNo);

    return 0;
}