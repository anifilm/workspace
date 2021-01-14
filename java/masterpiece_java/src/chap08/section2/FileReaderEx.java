// FileReader로 텍스트 파일 읽기
package chap08.section2;
import java.io.*;

public class FileReaderEx {
    public static void main(String[] args) {
        FileReader fin = null;
        try {
            fin = new FileReader("src/chap08/system.ini");  // 문자 입력 스트림 생성
            int ch;
            while ((ch = fin.read()) != -1) {  // 한 문자씩 파일 끝까지 읽는다.
                System.out.print((char)ch);
            }
            fin.close();
        }
        catch (IOException e) {
            System.out.println("입출력 오류");
        }
    }
}

/*

FileReader의 생성자

생성자                       설명
FileReader(File file)       file로 부터 읽는 FileReader 생성
FileReader(String name)     name 이름의 파일로부터 읽는 FileReader 생성


FileReader, Reader, InputStreamReader의 공통 주요 메서드

메서드                       설명
int read()                  한 개의 문자을 읽어 정수 형으로 반환
int read(char[] cbuf)       문자들을 읽어 cbuf 배열에 저장하고 읽은 개수 반환
int read(char[] cbuf, int off, int len)   최대 len 개수의 문자들을 읽어 cbuf 배열의 off 위치부터 저장하고 실제 읽은 개수 반환
String getEncoding()        스트림이 사용하는 문자 집합의 이름 반환
void close()                입력 스트림을 닫고 관련된 시스템 자원 해제

 */
