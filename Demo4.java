/*
    Write a java program which accept string from user and count
    number of Small character:
    
    Example:
             Input : Marvellous 
             Output: true

            Input : XYZ
            Output: false
             

*/

import java.util.*;

class StringDemo
{
    public String Str;

    public StringDemo(String UserStr)
    {
        Str = UserStr;
    }

    public boolean ChkVowel()
    {
        boolean bFlag = false;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Str.length(); iCnt++)
        {
            if(Str.charAt(iCnt) == 'a'|| Str.charAt(iCnt) == 'e' || Str.charAt(iCnt) == 'i' || Str.charAt(iCnt) == 'o' || Str.charAt(iCnt) == 'u' ||
               Str.charAt(iCnt) == 'A' || Str.charAt(iCnt) == 'E' || Str.charAt(iCnt) == 'I' || Str.charAt(iCnt) == 'O' || Str.charAt(iCnt) == 'U' ) 
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
}
class Demo4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        System.out.println("Enter the String: ");
        String Str = sobj.nextLine();

        StringDemo obj = new StringDemo(Str);

        bRet = obj.ChkVowel();

        if(bRet == true)
        {
            System.out.println("String contains vowels");
        }
        else
        {
            System.out.println("String NOT contains vowels");
        }
    }
}