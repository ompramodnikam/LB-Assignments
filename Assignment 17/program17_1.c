// Accept number of rows and columns from user and dipslay below pattern
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j <= i; j++)
                printf("*");
                printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}