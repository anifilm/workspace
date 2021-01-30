// try로 감싸야 할 영역의 결정
import java.util.Scanner;

class ExceptionCase3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("a/b... a? ");
        int n1 = sc.nextInt();  // 입력 오류 발생 가능
        System.out.print("a/b... b? ");
        int n2 = sc.nextInt();  // 입력 오류 발생 가능

        System.out.printf("%d / %d = %d\n", n1, n2, n1/n2);
        System.out.println("Good bye~~!");
    }
}
