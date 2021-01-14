// 바이너리 파일 복사
package chap08.section6;
import java.io.*;

public class BinaryCopyEx {
    public static void main(String[] args) {
        File src = new File("src/chap08/mygirl1.jpg");  // 원본 파일 경로명
        File dest = new File("src/chap08/mygirl1_copy.jpg");  // 복사 파일 경로명

        int ch;
        try {
            FileInputStream fi = new FileInputStream(src);     // 파일 입력 바이트 스트림 생성
            FileOutputStream fo = new FileOutputStream(dest);  // 파일 출력 바이트 스트림 생성
            while ((ch = fi.read()) != -1) {  // fi.read()는 파일 끝을 만나면 -1 반환
                fo.write((byte)ch);
            }
            fi.close();
            fo.close();
            System.out.println(src.getPath() + "를 " + dest.getPath() + "로 복사 하였습니다.");
        }
        catch (IOException e) {
            System.out.println("파일 복사 오류");
        }
    }
}
