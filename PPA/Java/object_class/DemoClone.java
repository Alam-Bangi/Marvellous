package PPA.Java.object_class;

public class DemoClone {
    public static void main(String[] args) throws CloneNotSupportedException {
        Temp temp1 = new Temp(11,21);

        Temp temp2 = (Temp) temp1.clone();

        System.out.println("Og: " + temp1.i + ", " + temp1.j);
        System.out.println("Cl: " + temp2.i + ", " + temp2.j);
    }
}
class Temp implements Cloneable {
    int i,j;
    public Temp(int a, int b) {
        this.i = a;
        this.j = b;
    }
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}