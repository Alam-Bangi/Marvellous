package LB;

import java.util.Scanner;

public class Program67 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter frequency : ");
        int iValue = scanner.nextInt();

        Iteration15 iteration = new Iteration15();
        iteration.display(iValue);
    }
}
class Iteration15 {
    public void display(int iNo) {
        int iCnt = 1;
        do {
            System.out.println("----------------");
            System.out.println(" Logic Building");
            System.out.println("----------------");
            iCnt++;

        } while(iCnt <= iNo);
    }
}
