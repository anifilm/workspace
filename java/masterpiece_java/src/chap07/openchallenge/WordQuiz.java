/*
Open Challenge - 영문자 히스토그램 만들기
영어 단어 뜻 맞추기 게임을 만들어 보자. 영어 단어와 한글 단어로 구성되는 Word 클래스를 작성하고, 프로그램 내에서 미리 여러 개의 Word 객체를
Vector<Word> 컬렉션에 삽입해 둔다. 그리고 다음 결과와 같이 랜덤하게 사용자에게 문제를 던진다. 벡터 내에 정답이 아닌 단어를 랜덤하게 3개
선택하고 정답과 함께 4개의 보기를 출력한다.
  (실행 결과 생략...)

 */
package chap07.openchallenge;
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

public class WordQuiz {
    private String title;  // 퀴즈 프로그램의 이름
    private Vector<Word> v;
    Scanner scanner;

    public WordQuiz(String name) {
        this.title = name;
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
    public void run() {
        System.out.println("\"" + title + "\"" + "의 단어 테스트를 시작합니다. -1을 입력하면 종료합니다.");
        System.out.println("현재 " + v.size() + "개의 단어가 들어 있습니다.");
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
        System.out.print("\"" + title + "\"를 종료합니다...");
        scanner.close();
    }

    public static void main(String[] args) {
        WordQuiz quiz = new WordQuiz("명품영어");
        quiz.run();
    }
}
