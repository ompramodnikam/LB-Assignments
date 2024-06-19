//Compare : 

#include<iostream>

using namespace std;

bool StrCmpX(char*src , char*dest)
{
    while((*dest != '\0') && (*src != '\0') )
    {
        if(*src != *dest)
        {
            break;
        }
        src++;
        dest++;
    }
    if((*src == '\0') && (*dest == '\0'))
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
    char Arr[100] = "Marvellous Infosystems";
    char Brr[100] = "Marvellous Infosystems";
    bool bRet = false;

    bRet = StrCmpX(Arr,Brr);

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