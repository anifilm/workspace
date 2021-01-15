/*
Q9
src\chap08\excercise\Q9에 있는 .txt 파일만 삭제하는 프로그램을 작성하라. c:\나 c:\Windows 등의 디렉터리에 적용하면 중요한 파일이
삭제될 수 있으니 조심하라.
  (실행 결과 생략...)

 */
package chap08.excercise.Q9;
import java.io.File;

public class DeleteTextFile {
    public static void deleteTextFile(File dir) {
        File[] subFiles = dir.listFiles();  // 디렉터리에 포함된 파일과 디렉터리 이름의 리스트 얻기
        String targetExt = ".txt";
        int count = 0;
        System.out.println(dir.getPath() + " 디렉터리의 " + targetExt + " 파일을 모두 삭제합니다....");
        for (int i = 0; i < subFiles.length; i++) {
            if (!subFiles[i].isFile())  // 파일이 아니면 다음으로
                continue;

            String name = subFiles[i].getName();
            int index = name.lastIndexOf('.');   // 파일명 문자열에서 제일 마지막에 있는 '.' 의 인덱스
            if (index == -1)  // 찾을 수 없음
                continue;

            String ext = name.substring(index);
            if (ext.equals(targetExt)) {
                System.out.println(subFiles[i].getPath() + " 삭제");
                subFiles[i].delete();  // 파일 삭제
                count++;
            }
        }
        System.out.println("총 " + count + "개의 " + targetExt + " 파일을 삭제하였습니다.");
    }

    public static void main(String[] args) {
        File file = new File("src/chap08/excercise/Q9");
        deleteTextFile(file);  // src/chap08/excercise/Q9 디렉터리에서 .txt 파일 삭제
    }
}
