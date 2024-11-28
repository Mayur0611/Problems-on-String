/*
   Accept Character from user and check whether it is Small or not(a - z):

   Example:   
             Input: a
             Output: TRUE

             Input: A
             Output: False

             
*/


#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char Ch)
{
    bool bFlag = false;

    if(Ch >= 'a' && Ch <= 'b' )
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small");
    }
    else
    {
        printf("It is not Small");
    }

    return 0;
}