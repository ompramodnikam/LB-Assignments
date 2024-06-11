//Questiion 3 : Programt o print 5 to 1 numbers on screen

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    
    iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}

int main()
{
    Display();
    
    return 0;
}