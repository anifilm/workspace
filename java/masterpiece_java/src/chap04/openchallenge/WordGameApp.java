/*
Open Challenge - 끝말잇기 게임 만들기
n명이 참가하는 끝말잇기 게임을 만들어 보자. 처음 단어는 "아버지"이다. n명의 참가자들은 순서대로 자신의 단어를 입력하면 된다. 끝말잇기에서
끝말이 틀린 경우 게임을 끝내고 게임에서 진 참가자를 화면에 출력한다. 프로그램에서는 시간 이연을 구현하지 않아도 된다. 그렇지만 참가자들이
스스로 시간을 제어보는 것도 좋겠다. 이 문제의 핵심은 여러 개의 객체와 배열 사용을 연습하기 위한 것으로, main()을 포함하는 WordGameApp
클래스와 각 선수를 나타내는 Player 클래스를 작성하고, 실행 중에는 WordGameApp 객체 하나와 선수 숫자만큼의 Player 객체를 생성하는데 있다.
문제에 충실하게 프로그램을 작성하여야 실려기 늘게 됨을 알기 바란다.
  (실행 결과 생략...)

 */
package chap04.openchallenge;
import java.util.Scanner;

class Player {
    private Scanner scanner;  // 키보드 입력
    private String name;  // 게임 참가자의 이름
    private String word;  // 참가자가 말한 단어

    public Player(String name) {
        this.name = name;
        scanner = new Scanner(System.in);
    }
    public String getName() { return name; }
    public String getWordFromUser() {
        System.out.print(name + " >> ");
        word = scanner.next();
        return word;
    }
    // lastWord와 참가자가 말한 word를 비교하여 끝말잇기가 잘되었는지 판단. 성공하였으면 true 반환
    public boolean checkSuccess(String lastWord) {
        int lastIndex = lastWord.length() - 1;  // 최종 단어의 맨 마지막 문자의 인덱스
        // 최종 단어의 맨 마지막 문자와 참가자가 말한 단어의 첫 문자가 같은지 비교
        if (lastWord.charAt(lastIndex) == word.charAt(0))
            return true;
        else
            return false;
    }
}

public class WordGameApp {
    private Scanner scanner;   // 키보드 입력
    private String startWord = "아버지";  // 시작 단어
    private Player[] players;  // 게임 참가자들

    public WordGameApp() {
        scanner = new Scanner(System.in);
    }
    // 게임 참가자 수를 입력받고 Player[] 배열을 생성하는 메서드
    private void createPlayers() {
        System.out.print("게임에 참가하는 인원은 몇명입니까? >> ");
        int nPlayers = scanner.nextInt();
        players = new Player[nPlayers];  // Player[] 레퍼런스 배열 생성
        // 각 참여자의 이름을 입력받아 Player 객체 생성
        for (int i = 0; i < nPlayers; i++) {
            System.out.print("참가자의 이름을 입력하세요 >> ");
            String name = scanner.next();
            players[i] = new Player(name);  // 참가자 배열 이름으로 객체 생성
        }
    }
    // 게임을 진행하는 메서드
    public void run() {
        System.out.println("끝말잇기 게임을 시작합니다.");
        createPlayers();  // 참가자를 위한 Player[] 배열을 생성한다.
        String lastWord = startWord;  // startWord에서 부터 시작한다.

        System.out.println("시작하는 단어는 " + lastWord + " 입니다.");
        int next = 0;  // 참가자들의 순서대로 증가
        // 게임이 끝날 때까지 루프
        while (true) {
            String newWord = players[next].getWordFromUser();  // next 참가자가 단어를 말하도록 한다.
            if (!players[next].checkSuccess(lastWord)) {  // next 참가자가 성공하였는지 검사
                System.out.print(players[next].getName() + "이 졌습니다.");
                break;  // 게임을 종료한다.
            }
            next++;  // 다음 참가자
            next %= players.length;  // next가 참가자의 개수보다 많게 증가하는 것을 제한
            lastWord = newWord;
        }
    }

    public static void main(String[] args) {
        WordGameApp game = new WordGameApp();
        game.run();
    }
}
