//Find largest digit : 

#include<iostream>
using namespace std;

int Max(int iNo)
{
    int iDigit = 0;
    static int iMax = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = Max(iValue);

    cout<<"largest Digits is : "<<iRet<<endl;

    return 0;
}