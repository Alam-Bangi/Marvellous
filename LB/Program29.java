package LB;

import java.util.Scanner;

public class Program29 {
    public static void main(String[] args) {
        Scanner scanner = null;
        scanner = new Scanner(System.in);
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;

        System.out.print("Enter your name: ");
        sName = scanner.nextLine();
        System.out.print("Enter your age: ");
        iAge = scanner.nextInt();
        System.out.print("Enter your marks: ");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome " + sName);
        System.out.println("Your age: " + iAge);
        System.out.println("Your marks: " + fMarks);
    }
}
