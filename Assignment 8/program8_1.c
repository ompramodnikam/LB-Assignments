//Question1 : Write a program which accept radius of circle from user and calculate their area

//consider value of PI as 3.14
//Area = PI * Radius * Radius

//Input : 5.3
//Output : 80.2026

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dArea  = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the radius of circle : ");
    scanf("%f\n",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f",dRet);

    return 0;
}

//TIME COMPLECITY : O(0)