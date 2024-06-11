//Question 2 : Accpet one number from user and print no of * on screen

#include<stdio.h>
void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}