/*
    Write a java program which accept string from user and count
    number of capital character:
    
    Example:
             Input : Marvellous Multo OS
             Output: 4
*/

import java.util.*;

class StringDemo
{
    public String Str;

    public StringDemo(String UserStr)
    {
        Str = UserStr;
    }

    public int CountCapital()
    {
        int iCnt = 0;
        int iCount = 0;
        for(iCnt = 0 ; iCnt < Str.length();iCnt++)
        {
            if(Str.charAt(iCnt)>= 'A' && Str.charAt(iCnt) <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Demo1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet  = 0; 
   
        System.out.println("Enter the String:");
        String Str = sobj.nextLine();

        StringDemo obj = new StringDemo(Str);

        iRet = obj.CountCapital();

        System.out.println("Count of Capital Character in String is : "+ iRet);
        
    }
}
