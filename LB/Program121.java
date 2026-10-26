package LB;

class Program121 {
    public static void main(String[] args) {
        Digit1 digit = new Digit1();
        digit.displayDigits();
    }
}

class Digit1 {
    public void displayDigits() {
        int iNo = 175902;

        while(iNo != 0) {
            System.out.println("Digit is : " + (iNo % 10));
            iNo = iNo / 10;
            System.out.println("Number is : " + iNo);
        }
    }
}