class BaseA {
    public int i, j;

    BaseA() {
        System.out.println("Inside BaseA Constructor");
    }
}

class BaseB {
    public int x, y;

    BaseB() {
        System.out.println("Inside BaseB Constructor");
    }
}

class Derived {

    public int a, b;

    Derived(){
        System.out.println("Inside Derived Class");
    }

}

class MultipleX {

    public static void main(String A[]) {
        BaseA aobj = new BaseA();
        BaseB bobj = new BaseB();
        Derived dobj = new Derived();
        aobj.i = 11;
        bobj.x = 21;
        dobj.a = 51;
        System.out.println(aobj.i);
        System.out.println(bobj.x);
        System.out.println(dobj.a);
    }
}