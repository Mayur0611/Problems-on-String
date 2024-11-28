/*
   write a program which accept string from user and accept one
   character . check whether that character is present in string
   or not:

    Example:
             Input:"Marvellous"
                    Character = 'o'
             Output: true
*/


#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)  
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[30];
    bool bRet = false;
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);  
    if(bRet == true)
    {
        printf("Character is present\n");
    }
    else
    {
        printf("There is no such character\n");
    }


    return 0;
}