//Toggle all the bits inbetween the range : 

#include <iostream>
using namespace std;

int toggleBitsInRange(unsigned int num, int start, int end) 
{
    
    unsigned int mask = 0;

    int i = start;
    while (i <= end) 
    {
        mask |= (1 << i);
        i++;
    }

    // Toggle the bits in the range
    num ^= mask;
    
    return num;
}

int main() 
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    int start = 0;
    int end = 0;

    cout<<"Enter a number: ";
    cin>>iValue;
    cout<<"Enter the start position: ";
    cin>>start;
    cout<<"Enter the end position: ";
    cin>>end;

    iRet = toggleBitsInRange(iValue, start, end);

    cout<<"Result : "<<iRet;

    return 0;
}
