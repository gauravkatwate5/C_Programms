#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char ch = '\0';

    printf("Enter The Character : \n");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}