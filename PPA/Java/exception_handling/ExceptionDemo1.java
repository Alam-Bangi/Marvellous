import java.util.Scanner;

class ExceptionDemo1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int no1= 0, no2 = 0, ans = 0;
        System.out.println("Enter number 1: ");
        no1 = sc.nextInt();
        System.out.println("Enter number 2: ");
        no2 = sc.nextInt();

        ans = no1 / no2; // Exception prone code
        System.out.println("Division is: " + ans);
    }
}