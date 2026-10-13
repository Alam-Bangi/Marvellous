package LB;

//  Approach 3
import java.util.Scanner;

public class Program36 {
    public static void main(String[] args) {
        Scanner scanner = null;
        scanner = new Scanner(System.in);

        int ivalue1 = 0, iValue2 = 0, iResult = 0;

        System.out.print("Enter first number: ");
        ivalue1 = scanner.nextInt();
        System.out.print("Enter second number: ");
        iValue2 = scanner.nextInt();

        iResult = addition(ivalue1, iValue2);           // Error
        System.out.println("Addition is: " + iResult);
    }

}
class Arithmetic {
    int no1, no2;

    public  int addition(int no1, int no2) {
        int iAns = 0;
        iAns = no1 + no2;
        return iAns;
    }
}