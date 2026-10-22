class ThreadDemo1 {
    public static void main(String A[]) {
        System.out.println("Inside Main");
        Thread t = Thread.currentThread();
        System.out.println("Current Thread name is : " + t.getName());

        System.out.println("Current Thread id is: " + t.getId());
        System.out.println("Cureent Thread is alive or not  " + t.isAlive());
        System.out.println("Current Thread Priority: " + t.getPriority());

    }
}
