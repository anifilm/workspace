package chap02;

class Ex04_DoubleError1 {
    public static void main(String[] args) {
        double num1 = 1.0000001;
        System.out.println(num1);

        double num2 = 2.0000001;
        System.out.println(num2);

        double result = num1 + num2;
        System.out.println(result);
    }
}
