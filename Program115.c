#include <stdio.h>

void Display(char ch)
{
    printf("Decimal : %d\n", ch);
    printf("Octal : 0%o\n", ch);
    printf("HexaDecimal : 0X%X\n", ch);
}

int main()
{
    char ch = '\0';

    printf("Enter The Character : \n");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}