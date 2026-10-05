package PPA.Java.multi_threading;

class ThreadDemo4 {
    public static void main(String[] args) {
        System.out.println("Inside main thread");

        Thread demo1 = new Thread(new Thredd());
        Thread demo2 = new Thread(new Thredd());
        demo1.start();
        demo2.start();
    }
}
class Thredd implements Runnable {
    public void run() {
        System.out.println("Thread is running");
    }
}