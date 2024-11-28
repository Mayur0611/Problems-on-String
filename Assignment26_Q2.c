/*
  Accept character from user , If character is  small then display its
  corresponding capital character,and if it is capital then display its corrosponding 
  small. in other cases display as it is.

  Example: 
       Input: A
       Output : a

       Input: a
       Output : A

       Input: %
       Output : %

*/



#include<stdio.h>

void Display(char Ch)
{

   if(Ch >= 'A' && Ch <= 'Z')
   {
      printf("%c \n",Ch + 32);
   
   }
   else if(Ch >= 'a' && Ch <= 'z')
   {
      printf("%c \n",Ch - 32);
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
