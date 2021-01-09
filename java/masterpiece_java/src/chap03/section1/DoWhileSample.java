// a부터 z까지 출력
package chap03.section1;

public class DoWhileSample {
    public static void main(String[] args) {
        char c = 'a';
        do {
            System.out.print(c);
            c = (char)(c + 1);  // 영문의 경우 1을 더하면 다음 문자의 코드 값
        } while (c <= 'z');
    }
}
