#include <stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    char ch = 'A';
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", ch);
            }
            else
            {
                printf("%c\t", ch + 32);
            }
            ch++;
        }
        printf("\n");
        ch = 'A';
    }
}

int main()
{
    int iRow = 0, iCol = 0;

    printf("Enter The Number Of Rows : \n");
    scanf("%d", &iRow);

    printf("Enter The Number of Column : \n");
    scanf("%d", &iCol);

    DisplayPattern(iRow, iCol);

    return 0;
}