//Calculate the number of character : 

#include<iostream>
using namespace std;

int CalNChar(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    cout<<"Enter the string : ";
    cin.getline(Arr,30);

    iRet = CalNChar(Arr);

    cout<<"Number of character is : "<<iRet;

    return 0;
}