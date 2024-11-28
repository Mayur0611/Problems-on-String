/*
   Accept Character from user and check whether it is alphabet or not:

   Example:   
             Input: F
             Output: TRUE

             Input: $
             Output: FALSE
*/


#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char Ch)
{
    bool bFlag = false;

    if(Ch >= 'A' && Ch <= 'Z' || Ch >= 'a' && Ch <= 'z' )
    {
        bFlag = true;
    }

    return bFlag;

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character: \n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Alphabet");
    }
    else
    {
        printf("It is not Alphabet");
    }

    return 0;
}