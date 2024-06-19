//Compare within the length : 

#include<iostream>

using namespace std;

bool StrCmpX(char*src , char*dest , int iCnt)
{
    while((*dest != '\0') && (iCnt != 0))
    {
        if(*src != *dest)
        {
            break;
        }
        src++;
        dest++;
        iCnt--;
    }
    if((*src != '\0') || (*dest == '\0'))
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
    char Brr[100] = "Marvellous Logic Building";
    bool bRet = true;

    bRet = StrCmpX(Arr,Brr,10);

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