/*
  Write a program which accept string from user and convert it into
  lower case
  
    Example: 
             Input: "Marvellous Multi OS"
             Output:"marvellous multi os"

*/

#include<stdio.h>

void StrlwrX(char *Str)
{
  while(*Str != '\0')
  {
    if(*Str >= 'A' && *Str <= 'Z')
    {
      printf("%c",*Str + 32);
  
    }
    else
    {
      printf("%c",*Str);
    }

    Str++;
  }
}

int main()
{
  char Arr[20];

  printf("Enter String: ");
  scanf("%[^'\n]s",Arr);

  StrlwrX(Arr);

  return 0;
}

