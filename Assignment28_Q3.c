/*
  Write a program which accept string from user and  toggle
  the case:
  
    Example: 
             Input: "Marvellous Multi OS"
             Output:"mARVELLOUS mULTI os"

*/

#include<stdio.h>

void StrtoggleX(char *Str)
{
  while(*Str != '\0')
  {
    if(*Str >= 'A' && *Str <= 'Z')
    {
       printf("%c",*Str + 32);
    } 
    
    else if(*Str >= 'a' && *Str <= 'z')
    {
       printf("%c",*Str - 32);
    }

    Str++;

  }
}

int main()
{
  char Arr[20];

  printf("Enter String: ");
  scanf("%[^'\n]s",Arr);

  StrtoggleX(Arr);

  return 0;
}

