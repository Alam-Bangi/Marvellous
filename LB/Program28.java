package LB;

import java.util.Scanner;

public class Program28 {
    public static void main(String[] args) {
        Scanner scanner = null;
        scanner = new Scanner(System.in);
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;

        System.out.print("Enter your name: ");
        sName = scanner.next();                     //Exception
        System.out.print("Enter your age: ");
        iAge = scanner.nextInt();
        System.out.print("Enter your marks: ");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome " + sName);
        System.out.println("Your age: " + iAge);
        System.out.println("Your marks: " + fMarks);
    }
}
/*
-------------- Invalid input --------------
Enter your name: Alam  Bangi
Enter your age: Exception in thread "main" java.util.InputMismatchException
	at java.base/java.util.Scanner.throwFor(Scanner.java:939)
	at java.base/java.util.Scanner.next(Scanner.java:1594)
	at java.base/java.util.Scanner.nextInt(Scanner.java:2258)
	at java.base/java.util.Scanner.nextInt(Scanner.java:2212)
	at LB.Program28.main(Program28.java:16)

Process finished with exit code 1

-------------- Valid input --------------
Enter your name: Alam
Enter your age: 23
Enter your marks: 98.98
Welcome Alam
Your age: 23
Your marks: 98.98

*/