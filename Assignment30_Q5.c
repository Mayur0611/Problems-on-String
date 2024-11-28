/*
   Accept division of student from user and depends on division
   display exam timing:There are 4 divisions in school as A,B,C,D
   Exam of division A at Am,B at 8:30 Am, C at 9:30 Am and D at 10:30Am
   (Application should be case insensitive):
   

   Example:   
             Input: C
             Output: Your Exam at 9:30 AM

             Input: d
             Output: Your Exam at 10:30 AM

             
*/

#include<stdio.h>

void DisplaySchedule(char ChDiv)
{
    if(ChDiv == 'A' || ChDiv == 'a')
    {
        printf("Your Exam at 7 AM");
    }
    else if(ChDiv == 'B' || ChDiv == 'b')
    {
        printf("Your Exam at 8:30 AM");
    }
    else if(ChDiv == 'C' || ChDiv == 'c')
    {
        printf("Your Exam at 9:30 AM");
    }
    else if(ChDiv == 'D' || ChDiv == 'd')
    {
        printf("Your Exam at 10:30 AM");
    }
    else
    {
        printf("Invalid Division");
    }
    
    
}

int main()
{
    char cValue = '\0';

    printf("Enter the Division: \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}