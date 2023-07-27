#include <stdio.h>

void DisplayASCII()
{
    char ch = '\0';
    int i = 0;
    for (i = 0; i <= 127; i++)
    {
        printf("%d\t%c\t%o\t%x\n", i, ch, i, i);
        ch++;
    }
}

int main()
{
    DisplayASCII();

    return 0;
}