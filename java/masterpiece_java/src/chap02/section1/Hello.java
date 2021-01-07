// 자바 프로그램의 기본 구조
package chap02.section1;

public class Hello {
    public static int sum(int n, int m) {
        return n + m;
    }
    
    public static void main(String[] args) {
        int i = 20;
        int s;
        char a;
        
        s = sum(i, 10);  // 메서드 호출
        a = '?';
        System.out.println(a);  // 문자 '?' 출력
        System.out.println("Hello");  // "Hello" 문자열 출력
        System.out.println(s);  // 정수 s값 30 출력
    }
}
