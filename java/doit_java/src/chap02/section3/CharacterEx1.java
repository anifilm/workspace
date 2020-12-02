// 문자형 연습 1
package chap02.section3;

public class CharacterEx1 {
    public static void main(String[] args) {

        char char1 = 'A';
        System.out.println(char1);      // 문자 출력
        System.out.println((int)char1); // 문자에 해당하는 정수값 (아스키 코드값) 출력

        char char2 = 66;                // 정수값 대입
        System.out.println(char2);      // 정수값에 해당하는 문자 출력

        char char3 = 67;
        System.out.println(char3);      // 문자 정수값 출력
        System.out.println((char)char3);// 정수값에 해당하는 문자 출력
    }
}
