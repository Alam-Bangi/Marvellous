package PPA.Java.object_class;

public class DemoEqualsXX {
    public static void main(String[] args) {
        Marvellousss marvellous1 = new Marvellousss(11,21);
        Marvellousss marvellous2 = new Marvellousss(11,22);

        if(marvellous1.equals(marvellous2)) {
            System.out.println("Objects are equal");
        } else {
            System.out.println("Objects are not equal");
        }
    }
}
class Marvellousss{
    int i,j;
    public Marvellousss(int a, int b) {
        this.i = a;
        this.j = b;
    }

    public boolean equals(Object obj2) {
        Marvellousss temp = (Marvellousss) obj2;
        if((this.i == temp.i) && (this.j == temp.j)) {
            return true;
        }
        return false;
    }
}