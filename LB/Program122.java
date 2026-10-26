package LB;

class Program122 {
    public static void main(String[] args) {
        Digit2 digit = new Digit2();
        digit.displayDigits();
    }
}

class Digit2 {
    public void displayDigits() {
        int iNo = 9752;
        int iDigit = 0;

        while(iNo != 0) {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            System.out.println(iDigit);
        }
    }
}