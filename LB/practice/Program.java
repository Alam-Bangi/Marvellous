package LB.practice;

import java.util.Scanner;

public class Program {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no: ");
        int number = sc.nextInt();

        printPerfectNumber(number);
    }
    public static void printPerfectNumber(int no) {
        for(int j = 1; j < no; j++) {
            int sum = 0;
            for (int i = 1; i < j; i++) {
                if (j % i == 0) {
                    sum += i;
                }
            }
            if (sum == j) {
                System.out.println(j);
            }
        }
    }
}
