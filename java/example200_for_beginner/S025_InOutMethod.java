// 025 키보드로 입력받아 콘솔에 출력하기 (입력, 출력)
import java.util.Scanner;

public class S025_InOutMethod {
    public static void main(String[] args) {

        Scanner scann = new Scanner(System.in);     // 키보드

        System.out.println("정수를 입력하세요.");
        int choice = scann.nextInt();       // 키보드로 정수 입력
        System.out.println(choice);

        System.out.println("실수를 입력하세요.");
        double rChoice = scann.nextDouble();
        System.out.println(rChoice);

        System.out.println("문자열을 입력하세요.");
        String sChoice = scann.next();
        System.out.println(sChoice);
    }
}
