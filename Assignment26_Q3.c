/*
  Accept character from user , If it is cappital then display all the character
  from the input characters till Z.If input character is small then print all
  the characters in reverse order till a. In other cases return directly.

  Example: 
       Input: V
       Output : V  W  X  Y  Z

       Input: e
       Output : d  c  b  a

       Input: %
       Output : %

*/


#include<stdio.h>

void Display(char Ch)
{
   char ChX = '\0';

   if(Ch >= 'A' && Ch <= 'Z')
   {
      for(ChX = Ch; ChX <= 'Z'; ChX++)
      {
         printf("%c \t",ChX);
      }
   }
   else if(Ch >= 'a' && Ch <= 'z')
   {
      for(ChX = Ch; ChX >= 'a'; ChX--)
      {
         printf("%c \t",ChX);
      }
   }
   else
   {
      printf("%c",Ch);
   }
 
}

int main()
{
   char cValue = '\0';


   printf("Enter the Character: ");
   scanf("%c",&cValue);

   Display(cValue);

   return 0;
}
