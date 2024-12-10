/* 
  Write a program which accept string from user and copy that
  Characters of that string into another string in reverse orde

          Input: "Marvellous Python"
          OutPut: nohtpy suollevraM
*/



#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    
    char *Start = dest;
    char *end  = src;

    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(Start < end)
    {
        *Start = temp;
        *Start = *end;
        *end = temp;

        Start ++;
        end--;
    }
}


int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30] = {};

    printf("Regular String: %s\n",Arr);

    StrCpyRev(Arr,Brr);

    

    printf("Reverse String: %s \n",Brr);

    return 0;
}