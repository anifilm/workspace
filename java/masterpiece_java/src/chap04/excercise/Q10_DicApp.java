/*
Q10
다음과 같은 Dictionary 클래스가 있다. 실행 결과와 같이 동작하도록 Dictionary 클래스의 kor2Eng() 메서드와 DicApp 클래스를 작성하라.
  (Dictionary 클래스, 실행 결과 생략...)

 */
package chap04.excercise;

import java.util.Scanner;

class Dictionaty {
    private static String[] kor = {"사랑", "아기", "돈", "미래", "희망"};
    private static String[] eng = {"love", "baby", "money", "future", "hope"};
    public static String kor2Eng(String word) {
        // 검색 코드 작성
        String mean = null;
        for (int i = 0; i < kor.length; i++)
            if (kor[i].equals(word)) mean = eng[i];
        return mean;
    }
}

public class Q10_DicApp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("한영 단어 검색 프로그램입니다.");
        while (true) {
            System.out.print("한글 단어? ");
            String word = scanner.next();
            if (word.equals("그만")) {
                System.out.println("프로그램을 종료합니다.");
                break;
            }
            String mean = Dictionaty.kor2Eng(word);
            if (mean != null)
                System.out.println(word + "은 " + mean);
            else
                System.out.println(word + "는 저의 사전에 없습니다.");
        }

        scanner.close();
    }
}
