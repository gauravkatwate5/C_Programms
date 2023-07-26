#include <stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (j % 2 != 0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
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