/*
Open Challenge - 영문자 히스토그램 만들기
텍스트를 키보드로 입력받아 알파벳이 아닌 문자는 제외하고 영문자 히스토그램을 만들어 보자. 대문자와 소문자는 모두 같은 것으로 간주하고,
세미콜론(;)만 있는 라인을 만나면 입력의 끝으로 해석한다.
  (실행 결과 생략...)

 */
package chap06.openchallenge;
import java.util.Scanner;

public class AlphabetHistogramApp {
    private int[] histoData = new int[26];  // 영어 알파벳 26자를 카운팅하는 정수형 배열

    public AlphabetHistogramApp() {
        for (int i = 0; i < histoData.length; i++)
            histoData[i] = 0;  // 초기에 카운팅 값을 모두 0으로 설정
    }
    // 키보드로부터 문자열을 읽어 스트링 버퍼에 저장
    public String readString() {
        System.out.println("영문 텍스트를 입력하고 세미콜론을 입력하세요.");
        StringBuffer sb = new StringBuffer();  // 키 입력을 받을 스트링 버퍼 생성
        Scanner scanner = new Scanner(System.in);
        while (true) {
            String line = scanner.nextLine();  // 텍스트 한 라인을 읽는다.
            if (line.length() == 1 && line.charAt(0) == ';')  // ';'만 있는 라인이면
                break;  // 입력 끝
            sb.append(line);   // 읽은 라인 문자열을 스트링 버퍼에 추가
        }
        scanner.close();
        return sb.toString();  // 스트링 퍼버의 문자열을 스트링으로 반환
    }
    // 입력받은 문자들로부터 히스토그램의 데이터를 생성
    public void makeHistogram(String text) {
        String s = text.toString();  // 스트링 버퍼의 문자열을 스트링으로 반환
        s = s.toLowerCase();  // 스트링을 모두 소문자로 변경

        // 입력된 모든 문자를 비교하여 히스토그램 데이터를 저장
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c >= 'a' && c <= 'z') {  // 알파벳 문자 카운팅
                int index = c - 'a';
                histoData[index]++;
            }
        }
    }
    // 히스토그램을 출력
    public void drawHistogram() {
        System.out.println("\n히스토그램을 그립니다.");
        for (int i = 0; i < histoData.length; i++) {
            System.out.print((char)('A' + i));  // 대문자을 출력한다.
            System.out.printf(" (%d)\t", histoData[i]);
            for (int j = 0; j < histoData[i]; j++)
                System.out.print('*');  // 히스토그램 데이터 개수만큼 '*'를 출력
            System.out.println();
        }
    }
    // 키보드로부터 알파벳 문자를 읽고 히스토그램을 그리는 핵심 메서드
    public void run() {
        String s = readString();
        makeHistogram(s);
        drawHistogram();
    }

    public static void main(String[] args) {
        AlphabetHistogramApp app = new AlphabetHistogramApp();
        app.run();
    }
}

/*

It's now of never, come hold me tight
Kiss me my darling, be mine tonight
Tomorrow will be too late
It's now or never, my love won't wait
When I first saw you, with your smile so tender
My heart was captured, my soul surrendered
I spent a lifetime, waiting for the right time
Now that your near, the time is here, at last
It's now or never, come hold me tight
Kiss me my darling, be mine tonight
Tomorrow will be too late
It's now or never, my love won't wait.

 */
