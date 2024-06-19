//Take one string from user and reverse the each charactrer of the string : 

#include<iostream>
#include<string.h>

void StrCpyRev(char*src , char*dest , int length)
{
    char temp = '\0';
    int i = 0;

    while(*src != '\0')
    {
        src++;
    }
    src--;

    while(i < length)
    {
        *dest = *src;
        dest++;
        src--;
        i++;
    }
    *dest = '\0';
}
using namespace std;

int main()
{
    char Arr[100] = "Marvellous Python";
    char Brr[100];

    StrCpyRev(Arr,Brr,strlen(Arr));

    cout<<"Updated string is : "<<Brr;

    return 0;
}