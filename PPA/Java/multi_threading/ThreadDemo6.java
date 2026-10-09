package PPA.Java.multi_threading;

class ThreadDemo6 {
    public static void main(String[] args) throws InterruptedException {
        System.out.println("Inside main thread");

        Demoooo demo = new Demoooo();
        Demoooo demo2 = new Demoooo();
        demo.start();
        demo2.start();

        demo.join();
        demo2.join();

        System.out.println("End of main thread");
    }
}
class Demoooo extends Thread {
    public void run() {
        System.out.println("Thread is running");
    }
}