//Toggle the first and last Nibble : 

#include <iostream>
using namespace std;

unsigned int toggleFirstAndLastNibbles(unsigned int iNo)
{
    unsigned int iMaskfirst = 0xF;          // Mask for the first nibble (0000 1111)
    unsigned int iMasklast = 0xF0000000;    // Mask for the last nibble (1111 0000 0000 0000 0000 0000 0000 0000)

    // Toggle the first nibble
    unsigned int i = 0;
    while (i < 4) 
    {
        iNo ^= (1 << i);   // Toggle each bit in the first nibble
        i++;
    }

    // Toggle the last nibble
    i = 0;
    while (i < 4) 
    {
        iNo ^= (1 << (28 + i));   // Toggle each bit in the last nibble
        i++;
    }
    return iNo;
}

int main() 
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    cout<<"Enter the number: ";
    cin>>iValue;

    iRet = toggleFirstAndLastNibbles(iValue);

    cout<<"Result : "<<iRet;

    return 0;
}
