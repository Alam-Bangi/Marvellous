package PPA.Java.object_class;

public class DemoToStringX {
    public static void main(String[] args) {
        Temp2 temp1 = new Temp2(11,21);
        Temp2 temp2 = new Temp2(11,21);

        System.out.println(temp1);
        System.out.println(temp2);
    }
}
class Temp2 {
    int i,j;
    public Temp2(int a, int b) {
        this.i = a;
        this.j = b;
    }

    @Override
    public String toString() {
        return "Inside toString";
    }
}