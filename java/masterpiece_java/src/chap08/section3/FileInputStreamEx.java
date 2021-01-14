// FileInputStream으로 바이너리 파일 읽기
package chap08.section3;
import java.io.*;

public class FileInputStreamEx {
    public static void main(String[] args) {
        byte b[] = new byte[6];  // 비어 있는 byte 배열

        try {
            FileInputStream fin = new FileInputStream("src/chap08/test.out");
            int n = 0, ch;
            while ((ch = fin.read()) != -1) {  // -1은 파일 끝 (EOF)
                b[n] = (byte)ch;  // 읽은 바이트를 배열에 저장
                n++;
            }
            // 배열 b[]의 바이트 값을 모두 화면에 출력
            System.out.println("src/chap08/test.out에서 읽은 배열을 출력합니다.");
            for (int i = 0; i < b.length; i++)
                System.out.print(b[i] + " ");
            System.out.println();
            fin.close();
        } catch (IOException e) {
            System.out.println("src/chap08/test.out에서 자료를 읽어올 수 없습니다. 경로를 확인하여 주십시오.");
        }
    }
}

/*

FileInputStream 클래스의 생성자

생성자                            설명
FileInputStream(File file)       file이 지정하는 파일로부터 읽는 FileInputStream 생성
FileInputStream(String name)     name이 지정하는 파일로부터 읽는 FileInputStream 생성


InputStream과 FileInputStream의 공통 주요 메서드

메서드                            설명
int read()                       입력 스트림에서 한 바이트를 읽어 int 형으로 반환
int read(byte[] b)               최대 배열 b의 크기만큼 바이트를 읽음. 읽는 도중 EOF를 만나면 실제 읽은 바이트 수 반환
int read(byte[] b, int off, int len)   최대 len 개의 바이트를 읽어 b 배열의 off 위치부터 저장. 읽는 도중 EOF를 만나면 실제 읽은 바이트 수 반환
int available()                  입력 스트림에서 현재 읽을 수 있는 바이트 수 반환
void close()                     입력 스트림을 닫고 관련된 시스템 자원 해제

 */
