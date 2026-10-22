
class Base {

    int i, j;

    void fun() {
        System.out.println("Base Fun\n");
    } // 1000

    void gun() {
        System.out.println("Base Gun\n");
    } // 2000

    void sun() {
        System.out.println("Base Sun\n");
    } // 3000

    void run() {
        System.out.println("Base Run\n");
    } // 4000
} // 16bytes

class Derived extends Base {

    int x;

    void fun() {
        System.out.println("Derived Fun\n");
    } // 5000

    void sun() {
        System.out.println("Derived Sun\n");
    } // 6000

    void mun() {
        System.out.println("Derived Mun \n");
    } // 7000

    void bun() {
        System.out.println("Derived Bun \n");
    } // 8000
}

class VirtualDemo6 {

    public static void main(String A[]) {
        Base bp = new Derived();
        bp.fun();
        bp.gun();
        bp.sun();
        bp.run();
        // bp.mun(); // error
        // bp.bun(); // error

    }
}