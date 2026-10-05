package PPA.Java.multi_threading;

class ThreadDemo3 {
    public static void main(String[] args) {
        System.out.println("Inside main thread");

        Thredd demo = new Thredd();
        Thredd demo2 = new Thredd();
        demo.run();     //Error
        demo2.run();    //Error
    }
}
class Thred implements Runnable {
    public void run() {
        System.out.println("Thread is running");
    }
}