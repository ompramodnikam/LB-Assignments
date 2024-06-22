//cheak wether bit is ON or OFF : 

#include<iostream>
using namespace std;

bool CheakbitOnOff(unsigned int iNo, int Pos)
{
    int iResult = 0;

    iResult = iNo & Pos;

    if((iResult == Pos))
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
    unsigned int iPos = 0x00000002;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = CheakbitOnOff(iValue,iPos);

    if(bRet == true)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }

    return 0;
}