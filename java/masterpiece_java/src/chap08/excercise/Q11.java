/*
Q11
words.txt 파일에는 한 라인에 하나의 영어 단어가 들어있다. 이 파일을 한 라인씩 읽어 Vector<String>에 라인별로 삽입하여 저장하고, 영어
단어를 입력받아 그 단어로 시작하는 모든 단어를 벡터에서 찾아 출력하는 프로그램을 작성하라.

 */
package chap08.excercise;
import java.util.*;
import java.io.*;

class WordSearch {
    private File file;
    private Vector<String> wordVector;

    public WordSearch(String fileName) {
        file = new File("src/chap08/words.txt");
        wordVector = new Vector<>();
    }
    private boolean readFile() {  // words.txt 파일 읽기
        try {
            Scanner fScanner = new Scanner(new FileInputStream(file));
            while(fScanner.hasNext()) {  // 파일을 라인 단위로 모두 읽기
                String line = fScanner.nextLine();  // 한 라인 읽고
                wordVector.add(line);    // 한 라인을 벡터에 저장
            }
            fScanner.close();
        }
        catch (FileNotFoundException e) {
            System.out.println("프로젝트 폴더에 words.txt 파일이 없습니다.");
            return false;
        }
        System.out.println("프로젝트 폴더에서 words.txt 파일을 읽었습니다.");
        return true;
    }
    private void processQuery() {  // 단어 검색
        Scanner scanner = new Scanner(System.in);
        while (true) {
            boolean found = false;
            System.out.print("단어 >> ");
            String searchWord = scanner.nextLine();  // 검색할 단어 입력
            if (searchWord.equals("그만") || searchWord.equals("exit")) {
                System.out.println("프로그램을 종료합니다.");
                scanner.close();
                break;
            }
            // 벡터에서 검색
            for (int i = 0; i < wordVector.size(); i++) {
                String word = wordVector.get(i);  // 벡터 내의 문자열
                if (word.length() < searchWord.length())  // 벡터의 문자열이 검색 문자열보다 짧은 경우
                    continue;
                // 벡터 문자열의 앞부분을 검색 문자열 크기만큼 잘라내기
                String frontPart = word.substring(0, searchWord.length());
                if (searchWord.equals(frontPart)) {  // 검색 문자열과 잘라내 앞 부분 비교
                    System.out.println(word);  // 벡터에서 발견한 단어 출력
                    found = true;
                }
            }
            if (!found)  // 한 단어도 발견하지 못했다면
                System.out.println("발견할 수 없음...");
        }
    }
    public void run() {
        boolean res = readFile();  // res가 false이면 단어 파일 읽기 실패
        if (res == true)
            processQuery();
        else
            System.out.println("프로그램을 종료합니다.");
    }
}

public class Q11 {
    public static void main(String[] args) {
        WordSearch search = new WordSearch("src/chap08/words.txt");
        search.run();
    }
}
