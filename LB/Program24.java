package LB;

import java.util.Scanner;

public class Program24 {
    public static void main(String[] args) {
        Scanner scanner = null;
        scanner = new Scanner(System.in);
        String sName = null;

        System.out.print("Enter your name: ");
        sName = scanner.next();
        System.out.println("Welcome " + sName);
    }
}
