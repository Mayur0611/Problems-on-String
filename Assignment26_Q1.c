/*
   Write a program which deisplay ASCII table . Table contain Symbol,Decimal,Hexadecimal 
   and octal Represention of every member from 0 to 255:

*/


#include<stdio.h>

void DisplayASCII()
{
   int iCnt = 0;
   

   printf("Dec\t Hex\t char\t");
   printf("\n");

   for(iCnt = 0; iCnt <= 30; iCnt++)
   {
      printf("%d\t %x\t %c",iCnt,iCnt, iCnt);
      printf("\n");
   
   }
 
}

int main()
{

   DisplayASCII();


   return 0;
}