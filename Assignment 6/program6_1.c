//Question1 : Write a progra which accept number from user and if number is less than 50 then print small if it is grater than 50 and less than 100 then print medium it it is grater than 100 then print large .

//Input : 75
//Output : medium 

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo < 50 )
    {
        printf("SMALL");
    }

    else if((50 < iNo ) && (iNo < 100))
    {
        printf("MEDIUM");
    }

    else 
    {
        printf("LARGE");
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    Number(iValue);

    return 0;
}