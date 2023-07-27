#include <stdio.h>

void DisplayShedule(char ch)
{
    if (ch == 'A' || ch == 'a')
    {
        printf("Your Exam at 7 AM");
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("Your Exam at 8:30 AM");
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("Your Exam at 9:20 AM");
    }
    else if (ch == 'D' || ch == 'd')
    {
        printf("Your Exam at 10:30 AM");
    }
}

int main()
{
    char ch = '\0';

    printf("Enter The Character : \n");
    scanf("%c", &ch);

    DisplayShedule(ch);

    return 0;
}