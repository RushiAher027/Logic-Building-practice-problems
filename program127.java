import java.util.Scanner;

class Digit
{
    public int CountDigits(int iNo)
    {
        int iCount = 0;

        if(iNo <0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {   
            iNo = iNo / 10;                 
            iCount++;
        }
        return iCount;
    }
}

class program127
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        Digit dight = new Digit();

        int iRet = 0;

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();
        
        iRet = dight.CountDigits(iValue);
        System.out.println("Numer of digits : " + iRet);

    }
}