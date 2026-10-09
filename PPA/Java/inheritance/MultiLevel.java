package PPA.Java.inheritance;

class SingleLevel {
    public static void main(String A[]) {
        DerivedX derivedX = new DerivedX();
        derivedX.fun();
        derivedX.gun();
//        derivedX.sun();
        derivedX.run();
    }
}
class Base2 {
    public int i,j;

    public Base2() {
        System.out.println("Inside Base Constructor");
    }
    public void fun() {
        System.out.println("Inside Base Fun");
    }
    public void gun() {
        System.out.println("Inside Base Gun");
    }
}
class Derived2 extends Base2 {
    public int x,y;

    public Derived2() {
        System.out.println("Inside Derived Constructor");
    }
    public void sun() {
        System.out.println("Inside Derived Sun");
    }
}
class DerivedX extends Base2 {
    public int a;

    public DerivedX() {
        System.out.println("Inside DerivedX Constructor");
    }
    public void run() {
        System.out.println("Inside DerivedX Run");
    }
}