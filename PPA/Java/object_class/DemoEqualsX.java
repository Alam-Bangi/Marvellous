package PPA.Java.object_class;

public class DemoEqualsX {
    public static void main(String[] args) {
        Marvellouss marvellous1 = new Marvellouss(11,21);
        Marvellouss marvellous2 = marvellous1;

        if(marvellous1.equals(marvellous2)) {
            System.out.println("Objects are equal");
        } else {
            System.out.println("Objects are not equal");
        }
    }
}
class Marvellouss{
    int i,j;
    public Marvellouss(int a, int b) {
        this.i = a;
        this.j = b;
    }
}