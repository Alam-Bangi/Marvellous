package LB;

import java.util.Scanner;

public class Program58 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter frequency : ");
        int iValue = scanner.nextInt();

        Iteration5 iteration5 = new Iteration5();
        iteration5.display(iValue);
    }
}
class Iteration5 {
    public void display(int iNo) {
        int iCnt = 0;
//        Input filter
        if(iNo <= 0) {
            System.out.println("Invalid input");
            return;
        }
        for(iCnt = 0; iCnt < iNo; iCnt++) {
            System.out.println("Logic Building");
        }

    }
}
