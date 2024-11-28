/*
  Write a program which accepts string from user and return difference between 
  frequency of Small characters and frequency of capital character:

  Example:
           Input: "MarvellouS"
           Output: 6 (8- 2)
*/

#include<stdio.h>

int Difference(char *Str)
{
    int iSmallCnt = 0;
    int iCapitalCnt = 0;
    int iDiff = 0;

    while(*Str != '\0')
    {
        if(*Str >='a' && *Str <= 'z')
        {
            iSmallCnt++;
        }
        else if(*Str >='A' && *Str <= 'Z')
        {
            iCapitalCnt++;
        }
        Str++;
    }

    iDiff = iSmallCnt - iCapitalCnt;

    if(iDiff < 0)
    {
        iDiff = -iDiff;
    }

    return iDiff;

}


int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n]s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;
}