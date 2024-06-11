//Question2 : Write a program which accept height and width of rectangle from user and find its area

//Area = heigth * Width

//Input : 5.3   9.78
//Output : 51.834

#include<stdio.h>

double RectangleArea(float fHeight, float fWidth)
{
    double dArea  = 0.0;

    dArea = fHeight * fWidth;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter the Height of rectangle : ");
    scanf("%f\n",&fValue1);
    printf("Enter the width of rectangle : ");
    scanf("%f\n",&fValue2);

    dRet = RectangleArea(fValue1 , fValue2);

    printf("Area of rectangle is : %f",dRet);

    return 0;
}

//TIME COMPLECITY : O(0)