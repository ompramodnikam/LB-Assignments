//Count small character :

#include<iostream>
using namespace std;

int Small(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
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

    iRet = Small(Arr);

    cout<<"Count of small character is : "<<iRet;

    return 0;
}