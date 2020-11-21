/*
나 혼자 코딩!
이차원 배열 연습하기
알파벳 소문자를 2글자씩 13줄(13행 2열)로 출력하는 프로그램을 이차원 배열로 구현해 보세요.
 */
package standalone;

public class TwoDimentionAlphabet {
    public static void main(String[] args) {

        char[][] alphabets = new char[13][2];
        char ch = 'A';

        for (int i = 0; i < alphabets.length; i++) {
            for (int j = 0; j < alphabets[i].length; j++, ch++)
                alphabets[i][j] = ch;
        }

        for (int i = 0; i < alphabets.length; i++) {
            for (int j = 0; j < alphabets[i].length; j++)
                System.out.print(alphabets[i][j]);
            System.out.println();
        }
    }
}
