/*
    Write a java program which accept string from user and return
    difference of frequency of Small character and capital character :
    
    Example:
             Input : Marvellous 
             Output:  8 (9 - 1)
*/

import java.util.*;

class StringDemo
{
    public String Str;

    public StringDemo(String UserStr)
    {
        Str = UserStr;
    }

    public int CountDiff()
    {
        int iCnt =0;
        int iSmall = 0;
        int iCapital = 0;
        int iResult = 0;
        for(iCnt = 0; iCnt < Str.length(); iCnt++)
        {
            if(Str.charAt(iCnt) >= 'a' && Str.charAt(iCnt) <= 'z')
            {
                iSmall++;
            }
            else if(Str.charAt(iCnt) >= 'A' && Str.charAt(iCnt) <= 'Z')
            {
                iCapital++;

            }
        }

        iResult  = iSmall - iCapital;

        if(iResult < 0)
        {
            iResult = iResult * -1;
        }

        return iResult;
    }
}
class Demo3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter the String: ");
        String Str = sobj.nextLine();

        StringDemo obj = new StringDemo(Str);

        iRet = obj.CountDiff();

        System.out.println("Count of Small Charecter in String is "+iRet);

    }
}