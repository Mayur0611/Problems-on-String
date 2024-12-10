/* 
  Write a program which accept string from user and copy that
  Characters of that string into another string by removing all
  white spaces:

          Input: "Marvellous Python"
          OutPut: "MarvellousPython"
*/



#include<stdio.h>

void StrCpyX(char *old , char *new)
{
   char *OldStr = old;
   char *NewStr = new;

   char temp = '\0';

   while(*OldStr != '\0')
   {
      if(*OldStr == ' ')
      {
         OldStr++;
      }

      *NewStr = *OldStr;
     

      OldStr++;
      NewStr++;
      
   }
}


int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30] ={};

    printf("Regular String: %s\n",Arr);

    StrCpyX(Arr,Brr);

    printf("Updted string is: %s \n",Brr);

    return 0;
}