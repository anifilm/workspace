// Q5 '글'이라는 한글 문자의 유니코드 값을 찾아서 char형으로 선언한 변수에 저장한 뒤
// 그 변수를 출력하여 확인해 보세요.
package exercise;

public class Q5 {
    public static void main(String[] args) {

        char char1 = '글';
        char char2 = '\uAE00';

        System.out.println(char1 + ": " + (int)char1);
        System.out.println(char2 + ": " + (int)char2);

        // 유니코드로 출력
        System.out.printf("%c: \\u%04X%n", char2, (int)char2);

    }
}
