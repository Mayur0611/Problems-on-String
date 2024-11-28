/*
  Accept character from user and display its ASCII value in decimal,
  octal and hexadecimal format:

  Example: 
       Input: A
       Output : 
            Decimal       65
            Octal         0101
            Hexadecimal   0X41


*/
#include<stdio.h>

void Display(char Ch)
{
   if(Ch >= 0 && Ch <= 127)
   {
      printf("Decimal: %d \n",Ch);
      printf("Octal: %o \n",Ch);
      printf("Hexadecimal: OX%x \n",Ch);
   }
}

#include<stdio.h>


int main()
{
   char cValue = '\0';


   printf("Enter the Character: ");
   scanf("%c",&cValue);

   Display(cValue);

   return 0;
}
