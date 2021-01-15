/*
Q10
전화번호를 미리 phone.txt 파일에 여러 개 저장해둔다. 이 파일을 읽어 다음 실행 예시와 같이 동작하는 검색 프로그램을 작성하라.
  (실행 결과 생략...)

 */
package chap08.excercise;
import java.io.*;
import java.util.*;

class PhoneExplorer {
    private File file;
    private HashMap<String, String> phoneMap;

    public PhoneExplorer() {
        file = new File("src/chap08/phone.txt");
        phoneMap = new HashMap<>();
    }
    private void readPhoneFile() {
        try {
            Scanner fScanner = new Scanner(new FileReader(file));
            while (fScanner.hasNext()) {
                String name = fScanner.next();  // 이름 읽기
                String phoneNum = fScanner.next();  // 전화번호 읽기
                phoneMap.put(name, phoneNum);  // HashMap에 저장
            }
            fScanner.close();
        }
        catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println("총 " + phoneMap.size() + "개의 전화번호를 읽었습니다.");
    }
    private void processQuery() {
        Scanner scanner = new Scanner(System.in);
        while (true) {
            System.out.print("이름 >> ");
            String name = scanner.next();  // 이름 입력
            if (name.equals("그만")) {
                System.out.println("프로그램을 종료합니다.");
                scanner.close();
                break;
            }
            String phoneNum = phoneMap.get(name);
            if (phoneNum == null)
                System.out.println("찾는 이름이 없습니다.");
            else
                System.out.println(phoneNum);
        }
    }
    public void run() {
        readPhoneFile();
        processQuery();
    }
}

public class Q10 {
    public static void main(String[] args) {
        PhoneExplorer phoneExplorer = new PhoneExplorer();
        phoneExplorer.run();
    }
}
