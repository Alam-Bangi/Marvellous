package LB;

import java.util.Scanner;

public class Program57 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter frequency : ");
        int iValue = scanner.nextInt();

        Iteration4 iteration4 = new Iteration4();
        iteration4.display(iValue);
    }
}
class Iteration4 {
    public void display(int iNo) {
        int iCnt = 0;
        for(iCnt = 0; iCnt < iNo; iCnt++) {
            System.out.println("Logic Building");
        }
    }
}
