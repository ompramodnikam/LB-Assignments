// Question 4 : Accept number of rows and number of columns from user and display below pattern
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    char i, j;

    for (i = 0; i < iRow; i++)
    {
        char ch = 'A'+ i;
        for (j = 0; j < iCol; j++)
        {
            printf("%c ", ch);
        }
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