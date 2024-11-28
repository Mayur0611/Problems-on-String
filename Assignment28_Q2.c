/*
  Write a program which accept string from user and convert it into
  Upper case
  
    Example: 
             Input: "Marvellous Multi OS"
             Output:"MARVELLOUS MULTI OS"

*/

#include<stdio.h>

void StruprX(char *Str)
{
  while(*Str != '\0')
  {
    if(*Str >= 'a' && *Str <= 'z')
    {
      printf("%c",*Str - 32);
  
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

  StruprX(Arr);

  return 0;
}

