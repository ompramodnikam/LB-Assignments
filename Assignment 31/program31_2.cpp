//count of largest word : 

#include<iostream>
using namespace std;

int WordCount(char*str)
{
    int iCnt = 0;
    int iLength = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            if(iCnt != 0)
            {
              if(iLength < iCnt)
                {
                    iLength = iCnt;
                    iCnt = 0;
                }  
            }
            
        }
        else 
        {
            iCnt++;
        }
        str++;
    }
    return iLength;
}

int main()
{
    char Arr[100] = "Nikam Om";
    int iRet = 0;

    iRet = WordCount(Arr);

    cout<<"count of largest word is : "<<iRet;

    return 0;
}
