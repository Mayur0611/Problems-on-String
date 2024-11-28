/*
  Write a program which accepts string from user and display it in reverse
   order:

  Example:
           Input: "IndiA"
           Output: "AidnI"
*/

#include<stdio.h>

void Reverse(char *Str)
{
    char *P= Str;

    while(*P != '\0')
    {
        P++;
    }

    P--;

    while(P >= Str)
    {
        printf("%c",*P);
        P--;
    }
    
}


int main()
{
    char Arr[20];
    

    printf("Enter string: ");
    scanf("%[^'\n]s",Arr);

    Reverse(Arr);

    return 0;
}