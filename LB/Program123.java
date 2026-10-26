package LB;

class Program123 {
    public static void main(String[] args) {
        Digit3 digit = new Digit3();
        digit.displayDigits(9752);
    }
}

class Digit3 {
    public void displayDigits(int iNo) {
        int iDigit = 0;

        while(iNo != 0) {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            System.out.println(iDigit);
        }
    }
}