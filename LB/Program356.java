package LB;

import java.util.Scanner;

class Number {
    private int arr[];

    public Number(int iSize) {
        arr = new int[iSize];
    }

    public void Accept() {
        Scanner sc = new Scanner(System.in);

        int iCnt = 0;
        System.out.println("Enter elements : ");
        for(iCnt = 0; iCnt < arr.length; iCnt++) {
            arr[iCnt] = sc.nextInt();
        }
    }

    public void Display() {
        int iCnt = 0;
        System.out.println("Elements are : ");
        for(iCnt = 0; iCnt < arr.length; iCnt++) {
            System.out.println(arr[iCnt]);
        }
    }
}

public class Program356 {
    public static void main(String[] args) {
        Number number1 = new Number(5);

        number1.Accept();
        number1.Display();

        number1 = null;
        System.gc();
    }
}
/*
    Enter elements :
    3
    5
    7
    9
    11
    Elements are :
    3
    5
    7
    9
    11
*/