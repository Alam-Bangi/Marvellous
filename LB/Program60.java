package LB;

import java.util.Scanner;

public class Program60 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter frequency : ");
        int iValue = scanner.nextInt();

        Iteration7 iteration = new Iteration7();
        iteration.display(iValue);
    }
}
class Iteration7 {
    public void display(int iNo) {
        int iCnt = 0;
        for(iCnt = 0; iCnt < iNo; iCnt++) {
            System.out.println("----------------");
            System.out.println(" Logic Building");
            System.out.println("----------------");
        }
    }
}
