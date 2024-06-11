//Question 5 : Accept one character from user and cheak wether that character is vowel (a,e,i,o,u) or not 
//Input : E , Output : true
//Input : a, Output : true

#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

bool Cheak(char cValue)
{
    if (cValue == 'a' || cValue == 'A' || cValue == 'e' || cValue == 'E' || cValue == 'i' || cValue == 'I' || cValue == 'o' || cValue == 'O' || cValue == 'u' || cValue == 'U') 
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
	char cChar = '\0';
    bool iRet = false;

    printf("Enter Alphabet : ");
    scanf("%c\n",&cChar);

    iRet = Cheak(cChar);

    if(iRet == true)
    {
        printf("%c is a vowel ",cChar);
    }
    else
    {
        printf("%c is not a vowel ",cChar);
    }

	return 0;
}
