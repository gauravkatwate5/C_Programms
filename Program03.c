#include <stdio.h>
void PrintNum()
{
    int i = 0;
    for (i = 5; i != 0; i--)
    {
        printf("%d\t", i);
    }
}

int main()
{
    PrintNum();

    return 0;
}