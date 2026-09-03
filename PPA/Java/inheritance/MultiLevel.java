class SingleLevel {
    public static void main(String A[]) {
        DerivedX derivedX = new Derived();
        derivedX.fun();
        derivedX.gun();
        derivedX.sun();
        derivedX.run();
    }
}
class Base{
    public int i,j;

    public Base() {
        System.out.println("Inside Base Constructor");
    }
    public void fun() {
        System.out.println("Inside Base Fun");
    }
    public void gun() {
        System.out.println("Inside Base Gun");
    }
}
class Derived extends Base {
    public int x,y;

    public Derived() {
        System.out.println("Inside Derived Constructor");
    }
    public void sun() {
        System.out.println("Inside Derived Sun");
    }
}
class DerivedX extends Base {
    public int a;

    public DerivedX() {
        System.out.println("Inside DerivedX Constructor");
    }
    public void run() {
        System.out.println("Inside DerivedX Run");
    }
}