package LB;

import java.util.Scanner;

class Program342 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[5];
        int iCnt = 0;

        System.out.println("Enter elements : ");
        for(iCnt = 0; iCnt < arr.length; iCnt++) {
            arr[iCnt] = sc.nextInt();
        }

        System.out.println("Elements of array are : ");
        for(iCnt = 0; iCnt < arr.length; iCnt++) {
            System.out.println(arr[iCnt]);
        }
    }
}

/*
    Output :
    Enter elements :
    12
    34
    56
    78
    90
    Elements of array are :
    12
    34
    56
    78
    90
 */