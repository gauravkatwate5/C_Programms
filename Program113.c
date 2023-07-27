#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        while (ch >= 'a')
        {
            printf("%c\t", ch);
            ch--;
        }
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
        {
            printf("%c\t", ch);
            ch++;
        }
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