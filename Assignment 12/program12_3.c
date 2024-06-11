//Question 3 : Write a program which accept the number from user and display below patter 
//  1   *   2   *   3   *   4   *   5   *

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t*\t",iCnt);
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