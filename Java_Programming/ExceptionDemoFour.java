import java.util.*;

class AgeInvalid extends Exception {
    public AgeInvalid(String str) {
        super(str);
    }
}

class ExceptionDemoFour {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter your age");
        int Age = 0;
        Age = sobj.nextInt();
        try {

            if (Age < 18) {
                throw new AgeInvalid("Your under  age ");
            } else {
                System.out.println("Welcome to --------");
            }
        } catch (AgeInvalid aobj) {
            System.out.println("Exception is Occured due to age");
        }
    }
}