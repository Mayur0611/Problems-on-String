/*
   write a program which accept string from user and accept one
   character . return last occarance of that character:

    Example:
             Input:"Marvellous"
                    Character = 'l'
             Output: 6
*/


#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str, char ch)  
{
    int iCount = 0;
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
          iCnt = iCount;
        }
        str++;
        iCount++; 
      
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);  

    printf("Character occarance at  index %d",iRet);
    

    return 0;
}