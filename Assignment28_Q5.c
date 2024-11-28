/*
  Write a program which accept string from user and count number
  of white spaces:

  Upper case
  
    Example: 
             Input: "India is my Country"
             Output: 3

*/

#include<stdio.h>

int CountWhite(char *Str)
{
  int iCnt = 0;
  
  while(*Str != '\0')
  {
    if(*Str == ' ')
    iCnt++;
    Str++;
  }
 

  return iCnt;
  
}

int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Enter String: ");
  scanf("%[^'\n]s",Arr);

  iRet = CountWhite(Arr);

  printf("The string contain %d white spaces",iRet);

  return 0;
}

