package LB;

import java.util.Scanner;

class Number1 {
    private int arr[];

    public Number1(int iSize) {
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

    public int Summation() {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt < arr.length; iCnt++) {
            iSum += arr[iCnt];
        }
        return iSum;
    }

    public float Average() {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt < arr.length; iCnt++) {
            iSum += arr[iCnt];
        }
        return (float)iSum / (float)arr.length;
    }
}

class Program357 {
    public static void main(String[] args) {
        int iRet = 0;
        float fRet = 0.0f;

        Number1 number1 = new Number1(5);

        number1.Accept();
        number1.Display();

        iRet = number1.Summation();
        System.out.println("Addition of elements is : " + iRet);

        fRet = number1.Average();
        System.out.println("Average of elements is : " + fRet);

        number1 = null;
        System.gc();
    }
}
/*
    Enter elements :
    1
    2
    3
    4
    5
    Elements are :
    1
    2
    3
    4
    5
    Addition of elements is : 15
    Average of elements is : 3.0
*/