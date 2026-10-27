package PPA.Java.object_class;

public class DemoToStringXX {
    public static void main(String[] args) {
        Temp3 temp1 = new Temp3(11,21);
        Temp3 temp2 = new Temp3(51,101);

        System.out.println(temp1);
        System.out.println(temp2);
    }
}
class Temp3 {
    int i,j;
    public Temp3(int a, int b) {
        this.i = a;
        this.j = b;
    }

    @Override
    public String toString() {
        return "Value of i :" + this.i + "\nValue of j :" + this.j;
    }
}