#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;
    int num = 1;

    for (i = 0; i < iRow; i++)
    {
        num = i + 1;
        for (j = 0; j < iCol; j++)
        {
            {
                if (j >= i) 
                {
                    printf("%d ", num++);
                }
                else
                {
                    printf("   "); 
                }
            }
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