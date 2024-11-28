/*
  Write a program which accepts string from user and check whether
  it contains vowels in it or not.
  

  Example:
           Input: "MarvellouS"
           Output: True  
*/

#include<stdio.h>
#include<stdbool.h>

int ChkVowel(char *Str)
{
    bool bFlag = false;
   

    while(*Str != '\0')
    {
        if(*Str == 'a' ||*Str == 'e'|| *Str == 'i'|| *Str == 'o'|| *Str == 'u'||*Str == 'A' ||*Str == 'E'|| *Str == 'I'|| *Str == 'O'|| *Str == 'U')
        {
            bFlag = true;
            break;
        }
        else 
        {
            return bFlag;
        }  
    }

    return bFlag;

    

}


int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter string: ");
    scanf("%[^'\n]s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("it Contains Vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}