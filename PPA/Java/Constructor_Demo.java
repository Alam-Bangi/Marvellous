class Demo {
    public Demo() {
        System.out.println("Inside Default Constructor");
    }
    public Demo(int i, int j) {
        System.out.println("Inside Parameterized Constructor");
    }
}

class Constructor_Demo {
    public static void main(String[] args) {
        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo(12,28);

        System.out.println("Inside Main");
    }
}