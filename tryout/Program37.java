package tryout;

//  Approach 3
import java.util.Scanner;

class Arithmeticc {
    static int no1, no2;
    static {
        System.out.println(no1 + " " + no2);
    }

    public static int addition(int no1, int no2) {
        int iAns = 0;
        iAns = no1 + no2;
        return iAns;
    }
}

public class Program37 {
    static {
        System.out.println("Inside program 37");
    }
    Program37() {
        System.out.println("Inside Constructor");
    }
    public static void main(String[] args) {

        Scanner scanner = null;
        scanner = new Scanner(System.in);

        int ivalue1 = 0, iValue2 = 0, iResult = 0;

        System.out.print("Enter first number: ");
        ivalue1 = scanner.nextInt();
        System.out.print("Enter second number: ");
        iValue2 = scanner.nextInt();

        iResult = Arithmeticc.addition(ivalue1, iValue2);
        System.out.println("Addition is: " + iResult);
    }
}
