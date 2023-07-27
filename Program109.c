#include <stdio.h>
#include <stdbool.h>

bool CheckSmall(char ch)
{
    if ((ch >= 'a' && ch <= 'z'))
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

    if (CheckSmall(ch))
    {
        printf("It is A Small case Character.");
    }
    else
    {
        printf("It is a not Small case Character.");
    }

    return 0;
}