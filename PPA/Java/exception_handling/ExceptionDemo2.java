import java.util.Scanner;

class ExceptionDemo2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = {11, 21, 51, 101, 111};
        int index = 0;

        System.out.print("Enter index: ");
        index = sc.nextInt();

        System.out.println("Element is: " + arr[index]);
        System.out.println("End of main...");
    }
}