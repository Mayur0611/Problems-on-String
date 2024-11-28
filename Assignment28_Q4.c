/*
  Write a program which accept string from user and display
  only digits from that String:

  Upper case
  
    Example: 
             Input: "Marve545llous121"
             Output: 545121

*/

#include<stdio.h>

void DisplayDigit(char *Str)
{
  while(*Str != '\0')
  {
    if(*Str >= 48 && *Str <= 57)
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

  DisplayDigit(Arr);

  return 0;
}

