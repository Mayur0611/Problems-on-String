/*
   Accept Character from user and check whether it is digit  or not:

   Example:   
             Input: 7
             Output: TRUE

             Input: A
             Output: FALSE
            
*/


#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char Ch)
{
    bool bFlag = false;

    if(Ch >= 48 && Ch <= 57 )
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

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not Digit");
    }

    return 0;
}