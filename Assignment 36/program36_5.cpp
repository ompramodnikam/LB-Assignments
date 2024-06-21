//Reverse the all digits : 

#include<iostream>
using namespace std;

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iDigit + (iRev * 10);
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = Reverse(iValue);

    cout<<"Number with reverse digits is : "<<iRet<<endl;

    return 0;
}