package LB;

import java.util.Scanner;

public class Program62 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter frequency : ");
        int iValue = scanner.nextInt();

        Iteration9 iteration = new Iteration9();
        iteration.display(iValue);
    }
}
class Iteration9 {
    public void display(int iNo) {
        int iCnt = 0;
        for(iCnt = 0; iCnt < iNo; iCnt++) {
            System.out.println("-----------------");
            System.out.println((iCnt+1) + "Logic Building");
            System.out.println("-----------------");
        }
    }
}
