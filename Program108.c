#include <stdio.h>
#include <stdbool.h>

bool CheckDigit(char ch)
{
    if ((ch >= '0' && ch <= '9'))
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
    char ch = '\0';

    printf("Enter The Character : \n");
    scanf("%c", &ch);

    if (CheckDigit(ch))
    {
        printf("It is A Digit.");
    }
    else
    {
        printf("It is a not Digit.");
    }

    return 0;
}