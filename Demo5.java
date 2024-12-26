/*
    Write a java program which accept string from user and Display 
    in Reverse Order:
  
    
    Example:
             Input : Marvellous
             Output: suollevraM
*/

import java.util.*;

class StringDemo
{
    public String Str;

    public StringDemo(String UserStr)
    {
        Str = UserStr;
    }

    public void StrReverse()
    {
        int iCnt = 0;
        for(iCnt = (Str.length()) - 1 ; iCnt >= 0 ;iCnt--)
        {
            System.out.print(Str.charAt(iCnt));
        }       
    }  
}

class Demo5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
   
        System.out.println("Enter the String:");
        String Str = sobj.nextLine();

        StringDemo obj = new StringDemo(Str);

        obj.StrReverse();    
    }
}
