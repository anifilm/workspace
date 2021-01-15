/*
Q7
파일 복사 연습을 해보자. 이미지 복사가 진행하는 동안 10% 진행할 때마다 '*' 하나씩 출력하도록 하라. 아래 실행 예시에서 프로젝트 폴더
밑에 이미지 파일을 미리 준비해 두었다.
  (실행 결과 생략...)

 */
package chap08.excercise;
import java.io.*;

public class Q7_CopyFile {
    public static void main(String[] args) {
        File src = new File("src/chap08/mygirl1.jpg");  // 원본 파일 경로명
        File dest = new File("src/chap08/mygirl1_copy.jpg");  // 복사 파일 경로명

        System.out.println(src + "를 " + dest + "로 복사합니다.");
        int ch, progress = 0;
        try {
            FileInputStream fi = new FileInputStream(src);     // 파일 입력 바이트 스트림 생성
            FileOutputStream fo = new FileOutputStream(dest);  // 파일 출력 바이트 스트림 생성
            long f_size = src.length();
            System.out.println("10%마다 *를 출력합니다.");
            while((ch = fi.read()) != -1) {
                fo.write((byte)ch);
                if (progress == f_size/10) {
                    System.out.print('*');
                    progress = 0;
                }
                progress++;
            }
            System.out.println();

            fi.close();
            fo.close();
            System.out.println(src.getPath() + "를 " + dest.getPath() + "로 복사 하였습니다.");
        }
        catch (IOException e) {
            System.out.println("파일 복사 오류");
        }
    }
}
