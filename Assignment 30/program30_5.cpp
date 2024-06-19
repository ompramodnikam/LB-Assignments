//Cheak wether the string is palindrome or not : 

#include<iostream>
using namespace std;

bool CheakPalindrome(char*str)
{
    char *first;
    char *last;
    first = str;
    last = str;
    int iCountP = 0;
    int iCountN = 0;

    while(*last != '\0')
    {
        last++;
    }
    last--;

    while(first <= last)
    {
        if(*first == *last)
        {
            iCountP++;
        }
        else 
        {
            iCountN++;
        }
        first++;
        last--;
    }
    if(iCountP > iCountN)
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
    char Arr[100] = "Marvellous";
    bool bRet = false;

    bRet = CheakPalindrome(Arr);

    if(bRet == true)
    {
        cout<<"The string is palindrome...";
    }
    else if(bRet == false)
    {
        cout<<"The string is not palindrome...";
    }

    return 0;
}