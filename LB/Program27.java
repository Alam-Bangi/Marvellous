package LB;

import java.util.Scanner;

public class Program27 {
    public static void main(String[] args) {
        Scanner scanner = null;
        scanner = new Scanner(System.in);
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0;     // Lossy Conversion - Error

        System.out.print("Enter your name: ");
        sName = scanner.next();
        System.out.println("Enter your age: ");
        iAge = scanner.nextInt();
        System.out.println("Enter your marks: ");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome " + sName);
        System.out.println("Your age: " + iAge);
        System.out.println("Your marks: " + fMarks);
    }
}
