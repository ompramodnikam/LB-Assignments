//Question 2 : Write a program which accept the number from user and display below patter 
// 1    2   3
// 1    2   3
// 1    2   3
// 1    2   3

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0;
    int j = 0;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iColumn ; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue1);
    printf("Enter the colums : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}