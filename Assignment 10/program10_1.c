//Question 1 : Write a program which accept the number from user and print their digits in reverse order 

//Input : 2395
//Output : 5
//         9
//         3
//         2

#include<stdio.h>
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo / 10; 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}