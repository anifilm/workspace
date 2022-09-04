package chap10;

public class Ex01_MemoryInStack {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 20;
        adder(num1, num2);
        System.out.println("--------------------");
    }

    public static int adder(int n1, int n2) {
        int result = n1 + n2;
        return result;
    }
}
