// try로 감싸야 할 영역의 결정
import java.util.Scanner;
import java.util.InputMismatchException;

class ExceptionCase4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("a/b... a? ");
            int n1 = sc.nextInt();
            System.out.print("a/b... b? ");
            int n2 = sc.nextInt();
            System.out.printf("%d / %d = %d\n", n1, n2, n1/n2);
        }
        catch (InputMismatchException e) {
            System.out.println(e.getMessage());
        }

        System.out.println("Good bye~~!");
    }
}
