import java.util.Scanner;

class ExceptionDemo4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int age = 0;

        System.out.println("Enter your age: ");
        age = sc.nextInt();
        try {
            if(age < 18) {
                throw new AgeInvalid("Age must be atleast 18");
            }
            else {
                System.out.println("Welcome to --------");
            }
        } catch (AgeInvalid e) {
            System.out.println("Exception occured due to age limit");
        }
    }
}
class AgeInvalid extends Exception {
    public AgeInvalid(String str) {
        super(str);
    }
}