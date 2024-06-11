//Question 2 : Write a program which accept the number from user and display below patter 
//  5   #   4   #   3   #   2   #   1   #

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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