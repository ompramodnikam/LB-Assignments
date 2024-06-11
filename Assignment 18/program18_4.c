//Accept number of rows and number of columns from user and display the below pattern
#include <stdio.h>

void displayPattern(int iRow, int iCol)
{
    int i, j;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol || i == j || j == (iCol - i + 1))
            {
                printf("*");
            }
            else if (j > i && j < (iCol - i + 1))
            {
                printf("#");
            }
            else if (j < i && j > (iCol - i + 1))
            {
                printf("$");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iRow, iCol;

    printf("Enter the number of rows: ");
    scanf("%d", &iRow);

    printf("Enter the number of columns: ");
    scanf("%d", &iCol);

    displayPattern(iRow, iCol);

    return 0;
}