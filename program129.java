import java.util.Scanner;

class Digit
{
    public int SumDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        if(iNo <0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {   
            iSum = iSum + (iNo %10);
            iNo = iNo / 10;
        }
        return iDigit;
    }
}

class program129
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        Digit dight = new Digit();

        int iRet = 0;

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();
        
        iRet = dight.SumDigits(iValue);
        System.out.println("Summation of digits : " + iRet);

    }
}