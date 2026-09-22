class Base {
    int i,j;
    void fun() {                    // 1000
        System.out.println("Base fun");
    }
    void gun() {                    // 2000
        System.out.println("Base gun");
    }
    void sun() {            // 3000
        System.out.println("Base sun");
    }
    void run() {            // 4000
        System.out.println("Base run");
    }
}

class Derived extends Base {
    int x;
    void fun() {                    // 5000
        System.out.println("Derived fun");
    }
    void sun() {                    // 6000
        System.out.println("Derived sun");
    }
    void mun() {            // 7000
        System.out.println("Derived mun");
    }
    void bun() {                    // 8000
        System.out.println("Derived bun");
    }
}

class VirtualDemo6 {
    public static void main(String[] args) {
        Base bp = new Derived();

        bp.fun();
        bp.gun();
        bp.sun();
        bp.run();
//        bp.mun();
//        bp.bun();
    }
}

/*
VirtualDemo6.java:42: error: cannot find symbol
        bp.mun();
          ^
  symbol:   method mun()
  location: variable bp of type Base
VirtualDemo6.java:43: error: cannot find symbol
        bp.bun();
          ^
  symbol:   method bun()
  location: variable bp of type Base
*/