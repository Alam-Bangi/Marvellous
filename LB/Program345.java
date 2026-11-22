package LB;

import java.util.Scanner;

class Program345 {
    public static void main(String[] args) {
        int ptr[] = null;  // to match code from c and c++
        int iCnt = 0, iSize = 0, iRet = 0;
        float fRet = 0.0f;

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

        iRet = Summation(ptr);
        System.out.println("Addition of elements is : " + iRet);

//        Step 3 : Deallocate the memory
        sc = null;
        ptr = null;
        System.gc();
    }

    public static int Summation(int arr[]){
        int iCnt = 0, iSum = 0;
        for(iCnt = 0; iCnt < arr.length; iCnt++) {
            iSum += arr[iCnt];
        }
        return iSum;
    }
}

/*
    Output :
    Enter size of array :
    4
    Enter elements :
    12
    34
    56
    78
    Elements of array are :
    12
    34
    56
    78
    Addition of elements is : 180
 */