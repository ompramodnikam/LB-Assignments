//Question 5 : Write a program which accept string and one character form user
//cheak the last occurance of the character 

#include<stdio.h>

void CheakOccurance(char *str)
{
    char *start = str;
    char *end = str;
    char  temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *end;
        *end = *start;
        *start = temp;
        start++;
        end--;
    }
    
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n]s",Arr);

    CheakOccurance(Arr);

    printf("Reversed string is : %s ",Arr);

    return 0;
}