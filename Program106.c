#include <stdio.h>
#include <stdbool.h>

bool CheckAlpha(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    if (CheckAlpha(ch))
    {
        printf("It is A Character.");
    }
    else
    {
        printf("It is a not character.");
    }

    return 0;
}