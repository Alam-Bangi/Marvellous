package LB;

//  Approach 1
import java.util.Scanner;

public class Program33 {
    public static void main(String[] args) {
        Scanner scanner = null;
        scanner = new Scanner(System.in);

        int ivalue1 = 0, iValue2 = 0, iResult = 0;

        System.out.print("Enter first number: ");
        ivalue1 = scanner.nextInt();
        System.out.print("Enter second number: ");
        iValue2 = scanner.nextInt();

        iResult = ivalue1 + iValue2;                    // Business Logic
        System.out.println("Addition is: " + iResult);
    }
}
