//Question 2 : Write a program which accept the range from user and print even numbers inbetween the range 

//Input : 1     5
//Output : 2       4       

//Input : -10     2
//Output : -10    -8     -6     -4      -2     0    2

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
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

    RangeDisplayEven(iValue1, iValue2);


    return 0;
}