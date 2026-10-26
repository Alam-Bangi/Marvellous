package LB;

public class Program63 {
    public static void main(String[] args) {
        Iteration11 iteration = new Iteration11();
        iteration.display();
    }
}
class Iteration11 {
    public void display() {
        int iCnt = 0;
        for(iCnt = 6; iCnt <= 6; iCnt--) {  // Infinite Loop
            System.out.println(iCnt);
        }
    }
}
