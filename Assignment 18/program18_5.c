// Accept number of rows and number of columns from user and display the below pattern
#include <stdio.h>

void displayPattern(int rows, int cols)
{
    int i, j;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols || i == j)
                printf("%d ", j);
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    displayPattern(rows, cols);
    return 0;
}