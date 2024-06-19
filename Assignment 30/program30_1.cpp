//Concatination : 

#include<iostream>
using namespace std;

void StrNCatX(char*src , char*dest , int iCnt)
{
    while(*src != '\0')
    {
        src++;
    }

    while((*dest != '\0') && (iCnt != 0))
    {
        *src = *dest;
        dest++;
        src++;
        iCnt--;
    }
    *src = '\0';
}

int main()
{
    char Arr[100] = "Marvellous Infosystems ";
    char Brr[100] = "Logic Building";

    StrNCatX(Arr,Brr,5);

    cout<<"Updated string is : "<<Arr;

    return 0;
}