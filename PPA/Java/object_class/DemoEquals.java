package PPA.Java.object_class;

public class DemoEquals {
    public static void main(String[] args) {
        Marvellous marvellous1 = new Marvellous(11,21);
        Marvellous marvellous2 = new Marvellous(11,21);

        if(marvellous1.equals(marvellous2)) {
            System.out.println("Objects are equal");
        } else {
            System.out.println("Objects are not equal");
        }
    }
}
class Marvellous{
    int i,j;
    public Marvellous(int a, int b) {
        this.i = a;
        this.j = b;
    }
}