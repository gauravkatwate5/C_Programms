#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
    if ((ch >= 'A' && ch <= 'Z'))
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

    if (CheckCapital(ch))
    {
        printf("It is A Capital Character.");
    }
    else
    {
        printf("It is a not Capital character.");
    }

    return 0;
}