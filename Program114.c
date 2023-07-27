#include <stdio.h>
#include <stdbool.h>

bool CheckSymbole(char ch)
{
    if ((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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

    if (CheckSymbole(ch))
    {
        printf("It is A Special Symbole.");
    }
    else
    {
        printf("It is a not Special Symbole.");
    }

    return 0;
}