// 한글 텍스트 파일 읽기 (문자 집합 지정이 잘못된 경우)
package chap08.section2;
import java.io.*;

public class FileReadHangulFail {
    public static void main(String[] args) {
        InputStreamReader in = null;
        FileInputStream fin = null;
        try {
            fin = new FileInputStream("src/chap08/hangul.txt");  // 파일로 부터 바이트 입력 스트림 생성
            in = new InputStreamReader(fin, "US-ASCII");         // 윈도우 기본 문자 인코딩은 CP949
            System.out.println("인코딩 문자 집합은 " + in.getEncoding());  // 문자집합 출력

            int ch;
            while ((ch = in.read()) != -1) {  // 문자 단위로 읽는다.
                System.out.print((char)ch);
            }

            in.close();
            fin.close();
        }
        catch (IOException e) {
            System.out.println("입출력 오류");
        }

    }
}

/*

InputStreamReader 생성자

생성자                               설명
InputStreamReader(InputStream in)   in으로부터 읽는 기본 문자 집합의 InputStreamReader 생성
InputStreamReader(InputStream in, Charset cs)   in으로부터 읽는 cs 문자 집합의 InputStreamReader 생성
InputStreamReader(InputStream in, String charsetName)   in으로부터 읽는 charsetName 문자 집합의 InputStreamReader 생성

 */
