package LB;

import java.util.Scanner;

class Program344 {
    public static void main(String[] args) {
        int ptr[] = null;  // to match code from c and c++
        int iCnt = 0, iSize = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        iSize = sc.nextInt();

//        Step 1 : Allocate the memory
        ptr = new int[iSize];

//        Step 2 : Use the memory
        System.out.println("Enter elements : ");
        for(iCnt = 0; iCnt < ptr.length; iCnt++) {
            ptr[iCnt] = sc.nextInt();
        }

        System.out.println("Elements of array are : ");
        for(iCnt = 0; iCnt < ptr.length; iCnt++) {
            System.out.println(ptr[iCnt]);
        }
//        Step 3 : Deallocate the memory
        sc = null;
        ptr = null;
        System.gc();
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