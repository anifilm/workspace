package chap02.section4;

public class PrintEx2 {
    public static void main(String[] args) {
        float f;
        double d;
        int i;

        f = 0.123456789123456789f;
        d = 0.123456789123456789;

        System.out.printf("float f is %f\n", f);
        System.out.printf("double d is %f\n", d);
        System.out.printf("float in .20f is %.20f\n", f);
        System.out.printf("double in .20lf is %.20f\n", d);
        System.out.printf("double in 25.4lf is \n[%25.4f]\n", d);
        System.out.printf("double in -25.4lf is \n[%-25.4f]\n", d);

        i = 365;
        System.out.printf("int in -8d is [%-8d]\n", i);
        System.out.printf("Exponet from of 123456.78 is %e\n", 123456.78);
    }
}
