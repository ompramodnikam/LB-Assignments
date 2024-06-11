//Question 5 : Write a program which accpet string from user and displau it in reverse order

#include<stdio.h>

void RevStr(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

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

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    RevStr(Arr);

    printf("Reversed string is : %s",Arr);

    return 0;
}