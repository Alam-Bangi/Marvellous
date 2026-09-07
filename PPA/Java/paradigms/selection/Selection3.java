import java.util.*;

class Selection3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int age = 0;
        System.out.print("Enter age: ");
        age = sc.nextInt();

        if(age < 18) {
            System.out.println("Not Allowed");
        } else {
            System.out.println("Allowed");
        }
    }
}