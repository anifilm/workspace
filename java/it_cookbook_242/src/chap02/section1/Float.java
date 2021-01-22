package chap02.section1;

public class Float {
    public static void main(String[] args) {
        float sum = 0.0f;

        for (int i = 0; i < 100; i++)
            sum = sum + 0.1f;

        System.out.println("The sum is " + sum);
    }
}
