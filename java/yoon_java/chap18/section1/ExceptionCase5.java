// 둘 이상의 예외를 처리하기 위한 구성
import java.util.Scanner;
import java.util.InputMismatchException;

class ExceptionCase5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("a/b... a? ");
            int n1 = sc.nextInt();
            System.out.print("a/b... b? ");
            int n2 = sc.nextInt();
            System.out.printf("%d / %d = %d\n", n1, n2, n1/n2);
        }
        catch (ArithmeticException e) {
            System.out.println(e.getMessage());
        }
        catch (InputMismatchException e) {
            System.out.println(e.getMessage());
        }

        System.out.println("Good bye~~!");
    }
}
