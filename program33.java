//Aproach 1
import java.util.Scanner;

class program33
{
    public static void main(String A[])
    {
        int iValue1 = 0,iValue2=0,iResult=0;
        Scanner sobj =new Scanner(System.in);
        
        System.out.println("Enter 1st No. ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter 2nd No. ");
        iValue2 = sobj.nextInt();
        
        iResult =iValue1 + iValue2 ; //Business logic

        System.out.println("Addition is : "+iResult);
        sobj.close();
    }
}