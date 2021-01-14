// 버퍼 스트림을 이용한 출력
package chap08.section4;
import java.io.*;
import java.util.Scanner;

public class BufferedIOEx {
    public static void main(String[] args) {
        FileReader fin = null;
        int ch;
        try {
            fin = new FileReader("src/chap08/test2.txt");
            BufferedOutputStream out = new BufferedOutputStream(System.out, 5);
            while ((ch = fin.read()) != -1) {  // 파일 데이터를 모두 스트림에 출력
                out.write(ch);
            }
            // 파일 데이터가 모두 출력된 상태
            new Scanner(System.in).nextLine();  // <Enter> 키 입력
            out.flush();  // 버퍼에 남아 있던 문자 모두 출력

            fin.close();
            out.close();
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}

/*

바이트 버퍼 스트림 클래스의 생성자

생성자                                           설명
BufferedInputStream(InputStream in)             in을 연결하는 디폴트 크기의 입력 버퍼 스트림 객체 생성
BufferedInputStream(InputStream in, int size)   in을 연결하는 size 크기의 입력 버퍼 스트림 객체 생성
BufferedOutputStream(OutputStream out)          out을 연결하는 디폴트 크기의 출력 버퍼 스트림 생성
BufferedOutputStream(OutputStream out, int size)   out을 연결하는 size 크기의 출력 버퍼 스트림 생성


문자 버퍼 스트림 클래스의 생성자

생성자                                  설명
BufferedReader(Reader in)              in을 연결하는 디폴트 크기의 문자 입력 버퍼 스트림 생성
BufferedReader(Reader in, int size)    in을 연결하는 size 크기의 문자 입력 버퍼 스트림 생성
BufferedWriter(Writer out)             out을 연결하는 디폴트 크기의 문자 출력 버퍼 스트림 생성
BufferedWriter(Writer out, int size)   out을 연결하는 size 크기의 문자 출력 버퍼 스트림 생성
 */
