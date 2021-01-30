// 예외의 처리를 위한 try ~ catch
import java.util.Scanner;

class ExceptionCase2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("a/b... a? ");
            int n1 = sc.nextInt();  // int형 정수 입력
            System.out.print("a/b... b? ");
            int n2 = sc.nextInt();  // int형 정수 입력
            System.out.printf("%d / %d = %d\n", n1, n2, n1/n2);  // 예외 발생 지점
        }
        catch (ArithmeticException e) {
            System.out.println(e.getMessage());
        }

        System.out.println("Good bye~~!");
    }
}
