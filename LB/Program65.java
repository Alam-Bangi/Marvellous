package LB;

import java.util.Scanner;

public class Program65 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter frequency : ");
        int iValue = scanner.nextInt();

        Iteration13 iteration = new Iteration13();
        iteration.display(iValue);
    }
}
class Iteration13 {
    public void display(int iNo) {
        int iCnt = 0;
        for(iCnt = iNo; iCnt > 0; iCnt--) {
            System.out.println("-----------------");
            System.out.println((iCnt) + " Logic Building");
            System.out.println("-----------------");
        }
    }
}
