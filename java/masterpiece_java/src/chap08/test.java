// 실습문제 12. 텍스트 파일에 있는 단어 검색하는 프로그램용 파일
package chap08;
import java.io.*;
import java.util.*;

public class test {
    private static boolean compareFile(FileInputStream src, FileInputStream dest) throws IOException {
        byte[] srcBuf = new byte[1024];   // 1KB 버퍼
        byte[] destbuf = new byte[1024];  // 1KB 버퍼

        int srcCount = 0, destCount;
        while (true) {
            srcCount = src.read(srcBuf, 0, srcBuf.length);      // src 스트림에서 srcBuf 크기만큼 읽기
            destCount = dest.read(destbuf, 0, destbuf.length);  // dest 스트림에서 destBuf 크기만큼 읽기

            if (srcCount != destCount)  // 읽어들인 바이트 수가 다르다면 파일은 일치하지 않음
                return false;
            if (srcCount == -1)  // 파일 끝에 도달함
                break;
            for (int i = 0; i < srcCount; i++) {
                if (srcBuf[i] != destbuf[i])  // 읽은 바이트를 비교
                    return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        FileInputStream srcStream = null;
        FileInputStream destStream = null;

        System.out.println("전체 경로명이 아닌 파일 이름만 입력하는 경우, 파일은 프로젝트 폴더에 있어야 합니다.");

        System.out.print("첫번째 파일 이름을 입력하세요 >> ");
        String src = scanner.nextLine();
        System.out.print("두번째 파일 이름을 입력하세요 >> ");
        String dest = scanner.nextLine();

        System.out.println(src + "와 " + dest + "를 비교합니다.");
        try {
            srcStream = new FileInputStream("src/chap08/" + src);    // 버퍼 입력 스트림에 연결
            destStream = new FileInputStream("src/chap08/" + dest);  // 버퍼 출력 스트림에 연결

            if (compareFile(srcStream, destStream))
                System.out.println("파일이 같습니다.");
            else
                System.out.println("파일이 다릅니다.");

            if (srcStream != null) srcStream.close();
            if (destStream != null) destStream.close();
        }
        catch (IOException e) {
            System.out.println("입출력 오류");
        }

        scanner.close();
    }
}
