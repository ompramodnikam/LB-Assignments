//Question 5 : Write a program which accept the number from user and display below patter 
// 8
// 2    4   6   8   10  12  14  16

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= 2*iNo ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}