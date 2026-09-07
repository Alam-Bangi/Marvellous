import java.util.*;

class Selection1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int no = 0;

        System.out.print("Enter number: ");
        no = sc.nextInt();

        if(no % 2 == 0) {
            System.out.println("Even Number");
        } else {
            System.out.println("Odd Number");
        }
    }
}