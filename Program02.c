#include <stdio.h>

void Display(int ino)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("Hello World!\n");
    }
}

int main()
{
    Display(5);
    return 0;
}