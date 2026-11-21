package LB;

import java.util.Scanner;

public class Program59 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter frequency : ");
        int iValue = scanner.nextInt();

        Iteration6 iteration6 = new Iteration6();
        iteration6.display(iValue);
    }
}
class Iteration6 {
    public void display(int iNo) {
        int iCnt = 0;
//        Input Updater
        if(iNo <= 0) {
            iNo = - iNo;        // Absolute number (0 or positive)
        }
        for(iCnt = 0; iCnt < iNo; iCnt++) {
            System.out.println("Logic Building");
        }
    }
}
