/*
Q2
206쪽의 알파벳 출력 예제에서 각 배열 요소 값을 소문자에서 대문자로 변환해 출력하세요.
힌트 A의 아스키 값은 65, a의 아스키 값은 97이므로 두 문자는 32만큼 차이가 납니다.
 */
package chap07.exercise;

public class Q2 {
    public static void main(String[] args) {

        char[] alphabets = new char[26];
        char ch = 'A' + 32;

        for (int i = 0; i < alphabets.length; i++, ch++)
            alphabets[i] = ch;  // 아스키 값으로 각 요소에 저장

        for (int i = 0; i < alphabets.length; i++)
            System.out.println(alphabets[i] + ", " + (int)alphabets[i]);
    }
}
