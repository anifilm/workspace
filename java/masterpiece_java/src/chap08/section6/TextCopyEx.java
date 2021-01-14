// 텍스트 파일 복사
package chap08.section6;
import java.io.*;

public class TextCopyEx {
    public static void main(String[] args) {
        File src = new File("src/chap08/system.ini");   // 원본 파일 경로명
        File dest = new File("src/chap08/system.txt");  // 복사 파일 경로명

        int ch;
        try {
            FileReader fr = new FileReader(src);   // 파일 입력 문자 스트림 생성
            FileWriter fw = new FileWriter(dest);  // 파일 출력 문자 스트림 생성
            while ((ch = fr.read()) != -1) {  // 문자 하나 읽고
                fw.write((char)ch);  // 문자 하나 쓰고
            }
            fr.close();
            fw.close();
            System.out.println(src.getPath() + "를 " + dest.getPath() + "로 복사 하였습니다.");
        }
        catch (IOException e) {
            System.out.println("파일 복사 오류");
        }
    }
}

/*

위 예제에서의 복사 응용프로그램은 한 바이트씩 복사하기 때문에, 파일이 큰 경우 복사 시간이 오래 걸리다.
파일 복사의 속도를 높이기 위해서는 블록 단위로 읽고 써야 한다.

BlockBinaryCopyEx.java 예제는 블록 단위로 복사하는 고속 복사 응용프로그램을 보여준다.

 */
