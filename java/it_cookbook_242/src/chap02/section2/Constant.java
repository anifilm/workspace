package chap02.section2;

public class Constant {
    public static void main(String[] args) {
        final double PI = 3.14;
        final String ERR_MSG = "Error has occurred while opening file.";
        final double MAX = 32.0;
        final double MIN = 10.0;

        double area, circum, diff;

        area = PI * 3.0 * 3.0;
        System.out.println("The area is " + area);

        circum = 2.0 * PI * 3.0;
        System.out.println("The circumference is " + circum);

        diff = MAX - MIN;
        System.out.println("The difference is " + diff);

        System.out.println(ERR_MSG);
    }
}
