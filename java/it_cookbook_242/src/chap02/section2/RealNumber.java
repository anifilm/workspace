package chap02.section2;

public class RealNumber {
    public static void main(String[] args) {
        float area; double total;
        area = 0.1234567f;
        System.out.println("Area is " + area);

        total = 0.1234567;
        System.out.println("Total is " + total);

        total = 0.1234567f;  // float (4 byte) -> Type Casting to double
        System.out.println("Total is " + total);
    }
}
