package LB;

import java.util.Scanner;

class Program124 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Digit4 digit = new Digit4();

        System.out.print("Enter number : ");
        int iValue = sc.nextInt();

        digit.displayDigits(iValue);
    }
}

class Digit4 {
    public void displayDigits(int iNo) {
        int iDigit = 0;

        while(iNo != 0) {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            System.out.println(iDigit);
        }
    }
}