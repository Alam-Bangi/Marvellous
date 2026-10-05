package PPA.Java.multi_threading;

class ThreadDemo5 {
    public static void main(String[] args) {
        System.out.println("Inside main thread");

        Demoooo demo = new Demoooo();
        Demoooo demo2 = new Demoooo();
        demo.start();
        demo2.start();

        System.out.println("End of main thread");   // Issue
    }
}
class Demoo extends Thread {
    public void run() {
        System.out.println("Thread is running");
    }
}