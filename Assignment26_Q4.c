/*
  Accept character from user and check whether it is special 
  Symobl or not(!, @, #, $, %, %, ^, &, *)
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char Ch)
{
  bool bFlag = false;

  if(Ch >= 33 && Ch <= 47 || Ch >= 58 && Ch <= 64 || Ch >= 91 && Ch <= 96 ||Ch >= 123 && Ch <= 127 )
  {
    bFlag = true;
  }
  else
  {
    bFlag = false;
  }

  return bFlag;

}


int main()
{
  char cValue ='\0';
  bool bRet = false;

  printf("Enter the character");
  scanf("%c",&cValue);

  bRet = ChkSpecial(cValue);

  if(bRet == true)
  {
    printf("It is Special Character");
  }
  else
  {
    printf("It is NOT Special Character");
  }

  return 0;
}

