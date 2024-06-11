//Question 5 : Accept division of student from user and depends on the division disply the exam timing.
// There are 4 divisions in school as A,B,C,D .
//Exam of division A at 7 AM
//Exam of division B at 8.30 AM
//Exam of division C at 9.20 AM
//Exam of division D at 10.30 AM

#include<stdio.h>

void DisplaySchedule(char ch)
{
    if((ch == 'A') || (ch == 'a'))
    {
        printf("Exam timiing : 7AM");
    }
    else if((ch == 'B') || (ch == 'b'))
    {
        printf("Exam timiing : 8.20AM");
    }
    else if((ch == 'C') || (ch == 'c'))
    {
        printf("Exam timiing : 9.20AM");
    }
    else if((ch == 'D') || (ch == 'd'))
    {
        printf("Exam timiing : 10.30AM");
    }
    else
    {
        printf("YOU DONT HAVE YOUR EXAM");
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}