package PPA.Java.multi_threading;

class ThreadDemo1 {
    public static void main(String[] args) {
        System.out.println("Inside main");

        Thread t = Thread.currentThread();

        System.out.println("Current thread is : " +  t.getName());

        System.out.println("Thread is alive or not : " + t.isAlive());

        System.out.println("Thread priority is : " + t.getPriority());
    }
}