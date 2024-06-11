//Question 1: Write a program which accept one number from user and print that number of even numbers on screen 

#include<stdio.h>

void CheakEven(int iNo)
{
    int iCnt = 0;


    if(iNo <= 0)
    {
        return;
    }
    for(iCnt = 1 ; iCnt <= iNo*2 ; iCnt++)
    {
        if((iCnt % 2 ) == 0)
        {
            printf("%d\t",iCnt);
        }
    }    

}
int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    CheakEven(iValue);
    

    return 0;
}