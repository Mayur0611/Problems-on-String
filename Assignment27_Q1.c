/*
  Write a program which accepts string from user and count number of 
  capital characters.

  Example:
           Input: "Marvellous Infosystem"
           Output: 2
*/

#include<stdio.h>

int CountCapital(char *Str)
{
    int iCnt = 0;

    while(*Str != '\0')
    {
        if(*Str >='A' && *Str <= 'Z')
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

    iRet = CountCapital(Arr);

    printf("%d",iRet);

    return 0;
}