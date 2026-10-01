import java.util.Scanner;

class ExceptionDemo2X {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = {11, 21, 51, 101, 111};
        int index = 0;

        try {
            System.out.print("Enter index: ");
            index = sc.nextInt();

            System.out.println("Element is: " + arr[index]);
        } catch (ArrayIndexOutOfBoundsException aobj) {
            System.out.println("Inside catch: " + aobj);
        } finally {
            System.out.println("End of main...");
        }
    }
}