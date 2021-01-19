/*
Open Challenge - 행맨(HangMan) 게임 만들기
행맨 게임을 만들면서 파일 입출력을 연습해 보자. 행맨은 많이 알려져 있는 전통 있는 게임이다. 25143개의 영단어를 가진 word.txt 파일을 읽고,
사용자 모르게 영어 단어 하나를 선택한다. 그리고 이 단어에서 몇 개의 글자를 숨긴 다음 화면에 출력하여 사용자가 단어를 맞추게 하는 게임이다.
숨긴 글자의 수가 많으면 그만큼 난이도가 높다. 여기서는 2개의 글자만 숨기도록 한다. 한 단어에 대해 5번 틀리면 프로그램을 종료한다.
word.txt 파일은 독자들에게 배포된 자료에 들어 있으며, 한 중에 하나의 영어 단어가 적혀 있다.
  (실행 결과 생략...)

 */
package chap08.openchallenge;
import java.util.*;
import java.io.*;

class Words {  // words.txt 파일을 읽고 벡터에 저장하고 벡터로부터 랜덤하게 단어를 추출하는 클래스
    Vector<String> wordVector;
    Scanner scanner;

    public Words(String fileName) {
        wordVector = new Vector<>();
        try {
            scanner = new Scanner(new FileReader(fileName));
            while(scanner.hasNext()) {  // 파일 끝까지 읽음
                String word = scanner.nextLine();  // 한 라인을 읽고 '\n'을 버린 나머지 문자열만 반환
                wordVector.add(word);   // 문자열을 벡터에 저장
            }
            scanner.close();
        }
        catch (FileNotFoundException e) {
            System.out.println("file not found error");
            System.exit(0);
        }
    }
    public String getRandomWord() {
        final int WORDMAX = wordVector.size(); // 총 단어의 개수
        int index = (int)(Math.random()*WORDMAX);
        return wordVector.get(index);
    }
}

public class HangManGameApp {
    private final int HIDDENCHAR = 2;  // 숨기는 글자 개수
    private StringBuffer hiddenWord;   // 숨긴 글자를 가진 단어
    private String newWord;  // 게임을 위해 선정된 단어
    private int failCount;   // 틀린 횟수
    private Scanner scanner; // 키 입력

    public HangManGameApp() {
        scanner = new Scanner(System.in);
    }
    // 선택된 단어 newWord에 2개의 글자를 숨긴 단어 hiddenWord를 만든다.
    private void makeHidden() {
        hiddenWord = new StringBuffer(newWord);
        Random r = new Random();
        // 단어가 6자 미만이면 하나만 숨기도록 한다.
        int h = 0;
        if (newWord.length() < 6) h = 1;

        for (int i = 0; i < HIDDENCHAR-h; i++) {
            int index = r.nextInt(newWord.length());
            char ch = newWord.charAt(index);
            for (int j = 0; j < newWord.length(); j++) {
                if (hiddenWord.charAt(j) == ch) {
                    hiddenWord.setCharAt(j, '-');
                    break;  // 같은 문자를 두번 숨기지 않도록 루프 중단
                }
            }
        }
    }
    // 사용자 키를 입력받으면서 행맨 게임을 진행한다. 5번 틀리면 종료한다. 한 단어 진행 후 y/n 물음에 대해 n을 입력하면 종료한다.
    private void go() {
        failCount = 0;
        char key;
        do {
            if (failCount == 5) {
                System.out.println("5번 실패 하였습니다.");
                break;
            }
            System.out.println(hiddenWord);
            System.out.print(">> ");
            String word = scanner.next();
            key = word.charAt(0);
        } while (!complete(key));
        System.out.println(newWord);
    }
    // 사용자가 입력한 문자 key가 숨긴 글자와 일치하는지 검사하고 일치하면 true를 반환한다. 그리고 나서 hiddenWord의 '-'문자를 key문자로 변경한다.
    private boolean complete(char key) {
        boolean hit = false;
        for (int i = 0; i < newWord.length(); i++) {
            if (hiddenWord.charAt(i) == '-' && newWord.charAt(i) == key) {
                hiddenWord.setCharAt(i, key);
                hit = true;
            }
        }
        if (!hit)
            failCount++;
        for (int i = 0; i < newWord.length(); i++) {
            if (hiddenWord.charAt(i) == '-')
                return false;
        }
        return true;
    }
    // 게임을 시작하는 메서드
    public void run() {
        System.out.println("지금부터 행맨 개임을 시작합니다.");
        Words words = new Words("src/chap08/words.txt");  // words.txt 파일의 모든 단어를 읽어 벡터에 저장한다.
        while (true) {
            newWord = words.getRandomWord();  // 랜덤한 단어 선택
            if (newWord == null) break;  // 단어 선택에 문제가 있는 경우 프로그램 종료
            makeHidden();  // 2개의 글자를 숨긴 단어 만들기
            go();  // 게임 진행
            System.out.println("Next(y/n)");
            String answer = scanner.next();
            if (answer.equals("n"))  // n을 입력하면 종료
                break;
        }
        System.out.println("게임을 종료합니다.");
        scanner.close();
    }

    public static void main(String[] args) {
        HangManGameApp app = new HangManGameApp();
        app.run();
    }
}
