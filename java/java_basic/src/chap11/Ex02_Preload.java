package chap11;

// 인스턴스 생성과 관계 없이 static 변수가 메모리 공간에 할당될 때 실행이 된다.
import java.util.Random;  // [1] 임포트

public class Ex02_Preload {
    static int num;  // [2] 스태팁 멤버 변수

    // [3] static 초기화 블록
    static {
        Random rand = new Random();  // [4]
        // main() 실행 전에 이미 난수값이 대입이 된다.
        num = rand.nextInt(100);  // [5]
    }  // [6]

    public static void main(String[] args) {  // [7]
        System.out.println(num);  // [8]
    }
}
