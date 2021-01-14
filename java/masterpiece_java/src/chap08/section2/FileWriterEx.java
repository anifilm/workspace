// 키보드 입력을 파일로 저장하기
package chap08.section2;
import java.io.*;
import java.util.*;

public class FileWriterEx {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        FileWriter fout = null;

        try {
            fout = new FileWriter("src/chap08/test.txt");  // 파일과 연결된 출력 문자 스트림 생성
            while (true) {
                String line = scanner.nextLine();  // 빈칸을 포함하여 한 줄 읽기. line에는 '\n'이 들어가지 않는다.
                if (line.length() == 0)  // 한 줄에 <Enter>키만 입력한 경우
                    break;
                fout.write(line, 0, line.length());  // 읽은 문자열을 파일에 저장
                fout.write("\r\n", 0, 2);  // 한 줄 띄기 위해 \r\n을 파일에 저장 (개행 처리)
            }
            fout.close();
        }
        catch (IOException e) {
            System.out.println("입출력 오류");
        }

        scanner.close();
    }
}

/*

FileWriter와 OutputStreamWriter의 생성자

생성자                                     설명
OutputStreamWriter(OutputStream out)      out에 출력하는 기본 문자 집합의 OutputStreamWriter 생성
OutputStreamWriter(OutputStream out, Charset cs)  out에 출력하는 cs 문자 집합의 OutputStreamWriter 생성
OutputStreamWriter(OutputStream out, String charsetName)  charsetName 문자 집합의 OutputStreamWriter 생성
FileWriter(File file)                     file에 데이터를 저장할 FileWriter 생성
FileWriter(String name)                   name 파일에 데이터를 저장할 FileWriter 생성
FileWriter(File file, boolean append)     FileWriter를 생성하며 append가 true이면 파일의 마지막부터 데이터를 저장
FileWriter(String name, boolean append)   FileWriter를 생성하며 append가 true이면 파일의 마지막부터 데이터를 저장


FileWriter와 OutputStreamWriter의 주요 메서드

메서드                           설명
void write(int c)               c를 char로 변환하여 한 개의 문자 출력
void write(String str)          문자열 str 출력
void write(String str, int off, int len)  인덱스 off부터 len개의 문자를 str 문자열에서 출력
void write(char[] cbuf, int off, int len) 인덱스 off부터 len개의 문자를 배열 cbuf에서 출력
void flush()                    스트림에 남아있는 데이터 모두 출력
String getEncoding()            스트림이 사용하는 문자 집합의 이름 반환
void close()                    출력 스트림을 닫고 관련된 시스템 자원 해제

 */
