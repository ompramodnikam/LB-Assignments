//Question2 : Accept amount in US doller and return its corresponding indian currency 
//Consider 1$  70 indian rupees 

//Input : 10
//Output : 700

//Input : 3
//Output : 210

#include<stdio.h>

int DollerToINR(int iUS_Doller)
{
    int iINR = 0;

    if(iUS_Doller < 0)
    {
        printf("The doller should be a positive value...\n");
        return;
    }

    iINR = (iUS_Doller)*70;
    
    return iINR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the amount in US$ : ");
    scanf("%d\n",&iValue);

    iRet = DollerToINR(iValue);

    printf("INR Ruppes of %d US$ is : %d",iValue,iRet);
    
    return 0;
}

//Time Complexity : 0
