/*
Q12
Open Challenge를 수정하여 사용자가 단어를 삽입할 수 있도록 기능을 추가하라.
  (실행 결과 생략...)

 */
package chap07.excercise;
import java.util.*;

class Word {  // 영어 단어와 한글 단어를 쌍으로 가진 하나의 단어 표현
    String word;
    String mean;

    public Word(String word, String mean) {
        this.word = word;
        this.mean = mean;
    }
    public String getWord() { return word; }
    public String getMean() { return mean; }
}

public class Q12_WordQuiz {
    private String title;  // 퀴즈 프로그램의 이름
    private Vector<Word> v;
    Scanner scanner;

    public Q12_WordQuiz(String title) {
        this.title = title;
        v = new Vector<>();
        v.add(new Word("love", "사랑"));
        v.add(new Word("animal", "동물"));
        v.add(new Word("emotion", "감정"));
        v.add(new Word("human", "인간"));
        v.add(new Word("stock", "주식"));
        v.add(new Word("trade", "거래"));
        v.add(new Word("society", "사회"));
        v.add(new Word("baby", "아기"));
        v.add(new Word("honey", "꿀"));
        v.add(new Word("dall", "인형"));
        v.add(new Word("bear", "곰"));
        v.add(new Word("picture", "사진"));
        v.add(new Word("painting", "그림"));
        v.add(new Word("fault", "오류"));
        v.add(new Word("example", "보기"));
        v.add(new Word("eye", "눈"));
        v.add(new Word("statue", "조각상"));

        scanner = new Scanner(System.in);
    }
    public void error(String msg) {
        System.out.println(msg);
    }
    private boolean contains(String word) {
        for (int i = 0; i < v.size(); i++) {
            if (v.get(i).getWord().equals(word))  // 사용자가 입력한 단어가 이미 있다면
                return true;
        }
        return false;
    }
    private void input() {
        int n = v.size();
        System.out.println("현재 " + n + "개 단어가 입력되어 있습니다.");
        System.out.println("영어 단어에 '그만' 또는 'exit'을 입력하면 입력을 종료합니다.");
        while (true) {
            System.out.print("단어(영어)와 뜻(한글) 입력 " + (n+1) + " >> ");
            String word = scanner.next();   // 사용자 입력, 단어(영어)
            if (word.equals("그만") || word.equals("exit")) break;
            String mean = scanner.next();  // 사용자 입력, 뜻(한글)
            if (contains(word)) {  // 사용자가 입력한 나라가 이미 있다면
                System.out.println(word + "는 이미 있습니다.");
                continue;
            }
            v.add(new Word(word, mean));
            n++;
        }
    }
    // ex[] 배열에 4개의 보기를 만든다. 보기는 현재 단어 벡터에 있는 단어를 랜덤하게 4개를 선택하고, 벡터에 대한 인덱스를 ex[] 배열에 저장한다.
    // answerIndex는 정답이 있는 벡터의 인덱스이므로, ex[]에는 answerIndex 값이 들어가지 않도록 한다.
    // 그러므로 이 메서드가 반환할 때는 answerIndex가 없는 ex[] 배열이 만들어지며, ex[] 배열에 대한 임의의 인덱스틀 반환한다.
    // 이 메서드가 끝난 뒤 이 위치에 answerIndex를 심는다.
    private int makeExample(int[] ex, int answerIndex) {
        int[] n = {-1, -1, -1, -1};  // -1로 초기화
        int index;
        for (int i = 0; i < n.length; i++) {
            do {
                index = (int)(Math.random() * v.size());
            } while (index == answerIndex || exists(n, index));  // 다시 시도
            n[i] = index;
        }
        for (int i = 0; i < n.length; i++) ex[i] = n[i];
        return (int)(Math.random() * n.length);  // ex[] 배열 내의 임의의 위치 반환. 이곳에 정답을 심는다.

    }
    // 배열 n[]에 index의 값이 존재하면 true, 아니면 false 리턴
    private boolean exists(int[] n, int index) {
        for (int i = 0; i < n.length; i++) {
            if (n[i] == index)
                return true;
        }
        return false;
    }
    public void quiz() {
        System.out.println("현재 " + v.size() + "개의 단어가 들어 있습니다. -1을 입력하면 테스트를 종료합니다.");
        while (true) {
            int answerIndex = (int)(Math.random() * v.size());  // 정답이 들어 있는 벡터 항목의 인덱스
            String word = v.get(answerIndex).getWord();  // 문제로 주어질 영어 단어

            // 4의 보기를 만들 벡터의 index 배열
            int[] example = new int[4];

            int answerLoc = makeExample(example, answerIndex);  // 정답이 있는 보기 번호
            example[answerLoc] = answerIndex;  // 보기에 정담 인덱스 저장

            // 문제를 출력합니다.
            System.out.println(word + "?");
            for (int i = 0; i < example.length; i++)
                System.out.print("(" + (i+1) + ")" + v.get(example[i]).getMean() + " ");  // 보기 출력

            System.out.print("\n>> ");  // 프롬프트
            try {
                int in = scanner.nextInt();  // 사용자의 정답 입력
                if (in == -1) break;  // -1 입력시 프로그램 종료

                // 사용자가 1~4 사이의 정답 입력
                in--;  // 1~4를 0~3의 인덱스로 변경
                if (in == answerLoc)
                    System.out.println("Excellent!!");
                else
                    System.out.println("No!!");
            }
            catch (InputMismatchException e) {
                scanner.next();  // 현재 스트림 버퍼에 입력되어 있는 입력을 읽어서 제거
                System.out.println("숫자를 입력하세요!");
                // while 문으로 다시 반복
            }
        }
    }
    private void finish() {
        System.out.print("\"" + title + "\"를 종료합니다...");
        scanner.close();
    }
    public void run() {
        System.out.println("*** 영어 단어 테스트 프로그램 \"" + title + "\" 입니다 ***");
        while (true) {
            System.out.print("단어 테스트:1, 단어 삽입:2, 종료:3 >> ");
            int menu;
            try {
                menu = scanner.nextInt();
            }
            catch (InputMismatchException e) {
                System.out.println("숫자를 입력하세요!");
                scanner.next();
                continue;
            }
            switch (menu) {
                case 1:
                    quiz();
                    break;
                case 2:
                    input();
                    break;
                case 3:
                    finish();
                    return;
                default:
                    error("잘못된 입력입니다.");
            }
            System.out.println();  // 공백 추가
        }
    }

    public static void main(String[] args) {
        Q12_WordQuiz quiz = new Q12_WordQuiz("명품영어");
        quiz.run();
    }
}
