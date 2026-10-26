package LB;

import java.util.Scanner;

public class Program66 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter frequency : ");
        int iValue = scanner.nextInt();

        Iteration14 iteration = new Iteration14();
        iteration.display(iValue);
    }
}
class Iteration14 {
    public void display(int iNo) {
        int iCnt = 1;
        while(iCnt <= iNo) {
            System.out.println("----------------");
            System.out.println(" Logic Building");
            System.out.println("----------------");

            iCnt++;
        }
    }
}
