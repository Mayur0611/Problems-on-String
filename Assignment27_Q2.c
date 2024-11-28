/*
  Write a program which accepts string from user and count number of 
  Small characters.

  Example:
           Input: "Jay Ganesh"
           Output: 7
*/

#include<stdio.h>

int CountSmall(char *Str)
{
    int iCnt = 0;

    while(*Str != '\0')
    {
        if(*Str >='a' && *Str <= 'z')
        {
            iCnt++;
        }
        Str++;
    }

    return iCnt;

}


int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n]s",Arr);

    iRet = CountSmall(Arr);

    printf("%d",iRet);

    return 0;
}