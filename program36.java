//Aproach 3
import java.util.Scanner;

class Arithematic
{
    public int Addition(int iNo1,int iNo2)
    {
        int iAns=0;
        iAns = iNo1 + iNo2 ; 
        return iAns ;
    }

}

class program36
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        int iValue1 = 0,iValue2=0,iResult=0;
        scanner =new Scanner(System.in);

        
        System.out.println("Enter 1st No. ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter 2nd No. ");
        iValue2 = scanner.nextInt();
        
        iResult = Addition(iValue1, iValue2); // Error

        System.out.println("Addition is : "+iResult);
        scanner.close();
    }
}