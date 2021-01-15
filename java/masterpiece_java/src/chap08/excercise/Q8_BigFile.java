/*
Q8
File 클래스를 이용하여 src/chap08에 있는 파일 중에서 제일 큰 파일의 이름과 크기를 출력하라.
  (실행 결과 생략...)

 */
package chap08.excercise;
import java.io.File;

public class Q8_BigFile {
    public static void bigFile(File dir) {
        File[] subFiles = dir.listFiles();  // 디렉터리에 포함된 파일과 디렉터리 이름의 리스트 얻기

        File f = subFiles[0];
        String bigFile = f.getName();
        long bigFileSize = f.length();

        for (int i = 1; i < subFiles.length; i++) {  // subFiles 배열의 각 File에 대해 루프
            f = subFiles[i];
            if (f.length() > bigFileSize) {
                bigFile = f.getName();
                bigFileSize = f.length();
            }
        }
        System.out.println("가장 큰 파일은 " + dir + "\\" + bigFile + " " + bigFileSize + "바이트");
    }

    public static void main(String[] args) {
        File file = new File("src/chap08");
        bigFile(file);  // src/chap08에서 가장 큰 파일 출력
    }
}
