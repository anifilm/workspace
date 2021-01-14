// File 클래스를 활용한 파일 관리
package chap08.section5;
import java.io.File;

public class FileEx {
    public static void listDirectory(File dir) {
        System.out.println("\n----- " + dir.getPath() + "의 서브 리스트 입니다 -----");

        File[] subFiles = dir.listFiles();  // 디렉터리에 포함된 파일과 디렉터리 이름의 리스트 얻기
        for (int i = 0; i < subFiles.length; i++) {  // subFiles 배열의 각 File에 대해 루프
            File f = subFiles[i];
            long t = f.lastModified();  // 마지막으로 수정된 시간
            System.out.printf("%-13s", f.getName());
            System.out.print(f.isFile() ? "\t파일    " : "\t디렉터리");
            System.out.print("\t  파일크기: " + f.length());  // 파일 크기
            System.out.printf("\t  수정한 시간: %tb %td %ta %tT\n", t, t, t, t);  // 포맷 출력
        }
    }

    public static void main(String[] args) {
        File f1 = new File("src/chap08/system.ini");
        System.out.println(f1.getPath() + ", " + f1.getParent() + ", " + f1.getName());

        String res = "";
        if (f1.isFile()) res = "파일";  // 파일 타입이면
        else if (f1.isDirectory()) res = "디렉터리";  // 디렉터리 타입이면
        System.out.println(f1.getPath() + "은 " + res + "입니다.");

        File f2 = new File("src/chap08/java_sample");  // 새로 만들고자 하는 디렉터리
        if (!f2.exists()) {  // f2 디렉터리가 존재하는지 검사
            f2.mkdir();  // 존재하지 않으면 디렉터리 생성
        }

        listDirectory(new File("src/chap08"));    // src/chap08에 있는 파일 리스트 출력
        f2.renameTo(new File("src/chap08/javasample"));  // java_sample -> javasample로 이름 변경

        listDirectory(new File("src/chap08"));    // javasample로 변경한 후 리스트 출력
    }
}

/*

File 클래스는 파일이나 디렉터리에 대해, 경로명, 크기, 타입, 수정 날짜 등의 속성 정보를 제공하고, 파일 삭제, 디렉터리 생성, 파일 이름 변경,
디렉터리 내의 파일 리스트 제공 등 다양한 파일 관리 작업을 지원한다. File 클래스에는 파일 입출력 기능은 없다.

파일을 읽고 쓰는 것은 앞서 공부한 FileInputStream, FileOutputStream, FileReader, FileWriter 등 파일 입출력 클래스를 사용해야 한다.


File 클래스의 생성자

생성자                               설명
File(File parent, String child)     parent 디렉터리에 child 이름의 서브 디렉터리나 파일을 나타내는 File 객체 생성
File(String pathname)               pathname의 완전 경로명이 나타내는 File 객체 생성
File(String parent, String child)   parent 디렉터리에 child 이름의 서브 디렉터리나 파일을 나타내는 File 객체 생성
File(URI uri)                       file:URI를 추상 경로명으로 변환하여 File 객체 생성


File 클래스의 주요 메서드

메서드                         설명
boolean mkdir()               새로운 디렉터리 생성
String[] list()               디렉터리 내의 파일과 서브 디렉터리 리스트를 문자열 배열로 반환
File[] listFile()             디렉터리 내의 파일과 서브 디렉터리 리스트를 File[] 배열로 반환
boolean renameTo(File dest)   dest가 지정하는 경로명으로 파일 이름 변경
boolean delete()              파일 또는 디렉터리 삭제
long length()                 파일의 크기 반환
String getPath()              경로명 전체를 문자열로 변환하여 반환
String getName()              파일이나 디렉터리의 부모 디렉터리 이름 반환
boolean isFile()              일반 파일이면 true 반환
boolean isDirectory()         디렉터리이면 true 반환
long lastModified()           파일이 마지막으로 변경된 시간 반환
boolean exists()              파일 또는 디렉터리가 존재하면 true 반환

 */
