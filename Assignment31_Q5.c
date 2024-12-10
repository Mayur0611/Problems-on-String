/* 
  Write a program which accept string from user and copy that
  Characters of that string into another string by converting 
  capital character  into small case:
 

          Input: "Marvellous Python"
          OutPut:mARVELLOUS pYTHON
*/



#include<stdio.h>

void StrCpyToggle(char *old , char *new)
{
   char *OldStr = old;
   char *NewStr = new;

   char temp = '\0';

   while(*OldStr != '\0')
   {
      if(*OldStr >= 'A' && *OldStr <= 'Z')
      {
         *OldStr = *OldStr + 32;
      }
      else if(*OldStr >= 'a' && *OldStr <= 'z')
      {
         *OldStr = *OldStr - 32;
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

    StrCpyToggle(Arr,Brr);

    printf("Updted string is: %s \n",Brr);

    return 0;
}