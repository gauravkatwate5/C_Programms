#include <stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0, iTemp = 0;

    for (i = 1; i <= iRow; i++)
    {
        iTemp = i;
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", iTemp);
            iTemp++;
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