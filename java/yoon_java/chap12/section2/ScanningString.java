// Scanner 클래스
import java.util.Scanner;

class ScanningString {
    public static void main(String[] args) {
        String source = "1 3 5";
        Scanner sc = new Scanner(source);

        int num1 = sc.nextInt();  // int형 테이터 추출
        int num2 = sc.nextInt();  // int형 테이터 추출
        int num3 = sc.nextInt();  // int형 테이터 추출

        int sum = num1 + num2 + num3;
        System.out.printf("%d + %d + %d = %d\n", num1, num2, num3, sum);

        sc.close();
    }
}
