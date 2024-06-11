//Question 1 : Write a program which accept the range from user and print the numbers inbetween the range 

//Input : 1     5
//Output : 1     2       3       4       5

//Input : -10     2
//Output : -10     -9    -8     -7       -6      -5     -4       -3      -2     -1      0    1     2

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the starting number : ");
    scanf("%d",&iValue1);
    printf("Enter the ending  number : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);


    return 0;
}