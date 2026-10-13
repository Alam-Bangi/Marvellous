package LB;

import java.util.Scanner;

public class Program23 {
    public static void main(String[] args) {
        Scanner scanner = null;
        scanner = new Scanner(System.in);
        String sName = null;

        System.out.print("Enter your name: ");
        sName = scanner.nextLine();
        System.out.println("Welcome " + sName);
    }
}
