/*
    Write a java program which accept string from user and count
    number of Small character:
    
    Example:
             Input : Marvellous 
             Output: 9
*/

import java.util.*;

class StringDemo
{
    public String Str;

    public StringDemo(String UserStr)
    {
        Str = UserStr;
    }

    public int CountSmall()
    {
        int iCnt =0;
        int iSmall = 0;
        for(iCnt = 0; iCnt < Str.length(); iCnt++)
        {
            if(Str.charAt(iCnt) >= 'a' && Str.charAt(iCnt) <= 'z')
            {
                iSmall++;
            }
        }
        return iSmall;
    }
}
class Demo2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter the String: ");
        String Str = sobj.nextLine();

        StringDemo obj = new StringDemo(Str);

        iRet = obj.CountSmall();

        System.out.println("Count of Small Charecter in String is "+iRet);

    }
}