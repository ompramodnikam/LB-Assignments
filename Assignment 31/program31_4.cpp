//Remove the extra spaces between the words : 

#include <iostream>
#include <string>
using namespace std;

void RemExtrSpa(string & src) 
{
    string dest;
    int i = 0;
    int length = src.length();

    while(i < length) 
    {
        while((i < length) && (src[i] == ' ')) 
        {
            i++;
        }

        while((i < length) && (src[i] != ' '))
        {
            dest = dest + src[i];
            i++;
        }

        if(i < length) 
        {
            dest = dest +  ' ';
        }
    }
    src = dest;
}

int main() 
{
    string str = "Marvellous    Multi    OS";

    RemExtrSpa(str);

    cout<<str<<endl;  

    return 0;
}
