import java.util.Scanner;

class ExceptionDemo1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int no1= 0, no2 = 0, ans = 0;
        System.out.println("Enter number 1: ");
        no1 = sc.nextInt();
        System.out.println("Enter number 2: ");
        no2 = sc.nextInt();

        ans = Demo.division(no1, no2);
        System.out.println("Division is: " + ans);
    }
}
class Demo {
    public static int division(int no1, int no2) {
        return no1 / no2;
    }
}