package LB;

//  Approach 3
import java.util.Scanner;

public class Program39 {
    public static void main(String[] args) {
        Scanner scanner = null;
        scanner = new Scanner(System.in);

        Arithmetic2 arithmetic = null;

        int ivalue1 = 0, iValue2 = 0, iResult = 0;

        System.out.print("Enter first number: ");
        ivalue1 = scanner.nextInt();
        System.out.print("Enter second number: ");
        iValue2 = scanner.nextInt();

        arithmetic = new Arithmetic2();
        iResult = arithmetic.addition(ivalue1, iValue2);
        System.out.println("Addition is: " + iResult);
    }
}
class Arithmetic2 {
    int no1, no2;

    public int addition(int no1, int no2) {
        int iAns = 0;
        iAns = no1 + no2;
        return iAns;
    }
}