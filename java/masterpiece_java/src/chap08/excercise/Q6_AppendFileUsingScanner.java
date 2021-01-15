/*
Q6
사용자로부터 두 개의 텍스트 파일 이름을 입력받고 첫 번째 파일 뒤에 두 번째 파일을 덧붙인 새로운 파일을 생성하는 프로그램을 작성하라.
아래 실행 예시에서는 프로젝트 폴더에 elvis1.txt와 elvis2.txt를 미리 준비해 두었다.
  (실행 결과 생략...)

 */
package chap08.excercise;
import java.io.*;
import java.util.*;

public class Q6_AppendFileUsingScanner {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        File src1 = null;
        File src2 = null;
        FileWriter dest = null;

        System.out.println("전체 경로명이 아닌 파일 이름만 입력하는 경우, 파일은 프로젝트 폴더에 있어야 합니다.");

        System.out.print("첫번째 파일 이름을 입력하세요 >> ");
        String fsrc1 = scanner.nextLine();
        System.out.print("두번째 파일 이름을 입력하세요 >> ");
        String fsrc2 = scanner.nextLine();

        System.out.println(fsrc1 + "와 " + fsrc2 + "를 복사하여 새로운 파일로 저장합니다.");
        try {
            src1 = new File("src/chap08/" + fsrc1);
            src2 = new File("src/chap08/" + fsrc2);
            dest = new FileWriter("src/chap08/appended.txt");  // 버퍼 출력 스트림에 연결

            // 텍스트 파일 복사 1 (한 줄씩 복사)
            scanner = new Scanner(new FileReader(src1));
            while (scanner.hasNext()) {
                String line = scanner.nextLine();
                dest.write(line + "\r\n");
            }
            // 텍스트 파일 복사 2 (한 줄씩 복사)
            scanner = new Scanner(new FileReader(src2));
            while (scanner.hasNext()) {
                String line = scanner.nextLine();
                dest.write(line + "\r\n");
            }

            System.out.println("두 파일의 내용을 복사하여 appended.txt 파일에 저장하였습니다.");
            scanner.close();
            if (dest != null) dest.close();
        }
        catch (IOException e) {
            System.out.println("입출력 오류");
        }

        scanner.close();
    }
}
