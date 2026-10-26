package LB;

import java.util.Scanner;

class Program125 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Digit5 digit = new Digit5();

        System.out.print("Enter number : ");
        int iValue = sc.nextInt();

        digit.displayDigits(iValue);
    }
}

class Digit5 {
    public void displayDigits(int iNo) {
        int iDigit = 0;

        if(iNo < 0) {
            iNo = -iNo;
        }
        while(iNo != 0) {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            System.out.println(iDigit);
        }
    }
}