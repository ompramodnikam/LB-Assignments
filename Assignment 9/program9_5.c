//Question 5 : Write a program which accept the range from user and print the numbers in reverse order.

//Input : 23    35
//Output : 35   34  33  32  31  30  29  28  27  26  25  24  23      

//Input : 10    18
//Output : 18   17  16  15  14  13  12  11  10

//Input : -10    2
//Output : 2    1   0   -1  -2  -3  -4  -5  -6  -7  -8  -9  -10

#include<stdio.h>
void DisplayRange(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    DisplayRange(iValue1, iValue2);

    return 0;
}