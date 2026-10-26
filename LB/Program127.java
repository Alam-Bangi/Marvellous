package LB;

import java.util.Scanner;

class Program127 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int iRet = 0;
        Digit7 digit = new Digit7();

        System.out.print("Enter number : ");
        int iValue = sc.nextInt();

        iRet = digit.countDigits(iValue);
        System.out.println("Total digits are: " + iRet);
    }
}

class Digit7 {
    public int countDigits(int iNo) {
        int iCount = 0;

        if(iNo < 0) {
            iNo = -iNo;
        }
        while(iNo != 0) {
            iNo = iNo / 10;
            iCount++;
        }
        return iCount;
    }
}