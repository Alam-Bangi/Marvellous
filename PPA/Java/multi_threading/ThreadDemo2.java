package PPA.Java.multi_threading;

class ThreadDemo2 {
    public static void main(String[] args) {
        System.out.println("Inside main thread");

        Demoooo demo = new Demoooo();
        Demoooo demo2 = new Demoooo();
        demo.start();
        demo2.start();
    }
}
class Demooo extends Thread {
    public void run() {
        System.out.println("Thread is running");
    }
}