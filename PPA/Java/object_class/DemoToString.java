package PPA.Java.object_class;

public class DemoToString {
    public static void main(String[] args) {
        Temp1 temp1 = new Temp1(11,21);
        Temp1 temp2 = new Temp1(11,21);

        System.out.println(temp1);
        System.out.println(temp2);
    }
}
class Temp1 {
    int i,j;
    public Temp1(int a, int b) {
        this.i = a;
        this.j = b;
    }
}