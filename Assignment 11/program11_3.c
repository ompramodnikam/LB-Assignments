//Question 3 : Write a program which accept the number from user and count frequency inbetween 3 and 7..

#include<stdio.h>

int Countfrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo > 0)
    {

        iDigit = iNo % 10;
        if(3 < iDigit < 7)
        {
            iCount++;
        }
        iNo = iNo / 10; 
        
    }
    return iCount;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = Countfrequency(iValue);

    printf("Frequency of two is : %d",iRet);

    return 0;
}