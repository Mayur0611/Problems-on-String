/*
   Accept Character from user and check whether it is captial or not:

   Example:   
             Input: F
             Output: TRUE

             
*/


#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char Ch)
{
    bool bFlag = false;

    if(Ch >= 'A' && Ch <= 'Z' )
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital");
    }
    else
    {
        printf("It is not Capital");
    }

    return 0;
}