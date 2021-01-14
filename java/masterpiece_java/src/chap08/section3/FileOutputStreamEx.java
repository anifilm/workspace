// FileOutputStream으로 바이너리 파일 쓰기
package chap08.section3;
import java.io.*;

public class FileOutputStreamEx {
    public static void main(String[] args) {
        byte[] b = {7, 51, 3, 4, -1, 24};
        try {
            FileOutputStream fout = new FileOutputStream("src/chap08/test.out");
            for (int i = 0; i < b.length; i++)
                fout.write(b[i]);  // 배열 b의 바이너리를 그대로 기록
        //  fout.write(b);  // 위의 for문 구문을 한 줄로 대신할 수 있다.
            fout.close();
        }
        catch (IOException e) {
            System.out.println("src/chap08/test.out에 파일을 저장할 수 없습니다. 경로를 확인하여 주십시오.");
            return;
        }
        System.out.println("src/chap08/test.out에 자료를 저장하였습니다.");
    }
}

/*

FileOutputStream 클래스의 생성자

생성자                           설명
FileOutputStream(File file)     file이 지정하는 파일에 출력하는 FileOutputStream 생성
FileOutputStream(String name)   name이 지정하는 파일에 출력하는 FileOutputStream 생성
FileOutputStream(File file, boolean append)     FileOutputStream을 생성하며 append가 true이면 file이 지정하는 파일의 마지막부터 데이터 저장
FileOutputStream(String name, boolean append)   FileOutputStream을 생성하며 append가 true이면 name 이름의 파일의 마지막부터 데이터 저장

메서드                           설명
void write(int b)               int 형으로 넘겨진 한 바이트를 출력 스트림으로 출력
void write(byte[] b)            배열 b의 바이트를 모두 출력 스트림으로 출력
void write(byte[] b, int off, int len)   len 크기만큼 off부터 배열 b를 출력 스트림으로 출력
void flush()                    출력 스트림에서 남아 있는 바이너리 데이터 모두 출력
void close()                    출력 스트림을 닫고 관련된 시스템 자원 해제

 */
