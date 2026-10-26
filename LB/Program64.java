package LB;

public class Program64 {
    public static void main(String[] args) {
        Iteration12 iteration = new Iteration12();
        iteration.display();
    }
}
class Iteration12 {
    public void display() {
        int iCnt = 0;
        for(iCnt = 6; iCnt > 0; iCnt--) {
            System.out.println(iCnt);
        }
    }
}
