#include<iostream>
using namespace std;

int ToggleBit(int iNo)
{
    unsigned int iMask = 0x00000240;
    unsigned int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    
    cout<<"Enter number : "<<endl;
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Updated number is : "<<iRet;

    return 0;
}




