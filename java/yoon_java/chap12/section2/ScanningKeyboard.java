// Scanner 클래스의 키보드 적용
import java.util.Scanner;

class ScanningKeyboard {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num1 = sc.nextInt();  // int형 테이터 추출
        int num2 = sc.nextInt();  // int형 테이터 추출
        int num3 = sc.nextInt();  // int형 테이터 추출

        int sum = num1 + num2 + num3;
        System.out.printf("%d + %d + %d = %d\n", num1, num2, num3, sum);

        sc.close();
    }
}
