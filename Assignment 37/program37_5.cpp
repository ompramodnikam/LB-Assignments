//cheak 1st and 32th bit is ON or OFF : 
 

#include<iostream>
using namespace std;

bool ChkBit(unsigned int iNo)
{
    unsigned int iMask = 0x08000001;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    unsigned int iValue = 0;
    bool bRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"5th and 18th bit is ON";
    }
    else 
    {
        cout<<"5th and 18th bit is OFF";
    }

    return 0;
}