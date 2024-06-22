//count the number of ON(1) bit without using % and / operator : 

#include<iostream>
using namespace std;

int CountOnBit(unsigned int iNo)
{
    int iCount = 0;
    unsigned iMask = 1;

    while(iNo > 0)
    {
        if(iNo & iMask == 1)
        {
            iCount++;
        }
        //shift the number by one bit
        iNo >>= 1;
    }
    return iCount;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = CountOnBit(iValue);

    cout<<"Count of ON(1) bit is : "<<iRet;

    return 0;
}