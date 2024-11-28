/*
   write a program which accept string from user reverse that string:

    Example:
             Input:"abcd"
                    
             Output: "dcba"
*/


#include<stdio.h> 
#include<stdbool.h>

void StrRevX(char *Str)  
{
    char *Start = Str;
    char *end = Str;

    char temp = '\0';

    while(*end  != 0)
    {
        end++;
    }

    end--;

    while(Start < end)
    {
        temp = *Start;
        *Start = *end;
        *end = temp;

        Start++;
        end--;
    }
   
   
}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);


    StrRevX(Arr);  

    printf("String after reversal : %s\n",Arr);

    
    

    return 0;
}