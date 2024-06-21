//Find smallest digit : 

#include<iostream>
using namespace std;

int Smallest(int iNo)
{
    int iDigit = 0;
    static int iNumber = iNo;
    int iMax = 0;

    //It is used to find max number 
    while(iNumber > 0)
    {
        iDigit = iNumber % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNumber = iNumber / 10;
    }

    //used to find smallest number 
    static int iSmall = iMax;
    if(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iSmall > iDigit)
        {
            iSmall = iDigit;
        }
        iNo = iNo / 10;
        Smallest(iNo);
    }
    return iSmall;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = Smallest(iValue);

    cout<<"smallest Digits is : "<<iRet<<endl;

    return 0;
}