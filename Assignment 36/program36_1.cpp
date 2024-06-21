//Count white spaces :

#include<iostream>
using namespace std;

int WhiteSpaces(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpaces(str);
    }
    return iCount;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    cout<<"Enter the string : ";
    cin.getline(Arr,30);

    iRet = WhiteSpaces(Arr);

    cout<<"Count of white spaces is : "<<iRet;

    return 0;
}