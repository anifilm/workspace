/*
Q13
간단한 파일 탐색기를 만들어 보자. 처음 시작은 c:\에서 부터 시작한다. 명령은 크게 2가지로 ".."를 입력하면 부모 디렉터리로 이동하고,
"디렉터리명"을 입력하면 서브 디렉터리로 이동하여 파일 리스르틀 보여준다.
  (실행 결과 생략...)

 */
package chap08.excercise.Q13;
import java.io.File;
import java.util.Scanner;

public class FileExplorer {
    private File currentDir = null;
    private File[] subFiles = null;

    public FileExplorer(String dirName) {
        currentDir = new File(dirName);
    }
    private void showSubDirtories() {
        System.out.println("[" + currentDir.getPath() + "]");
        subFiles = currentDir.listFiles();
        for (File f : subFiles) {
            System.out.print((f.isFile()) ? "file" : "/dir");
            System.out.printf("%20s", f.length() + " 바이트");
            System.out.println("\t\t" + f.getName());
        }
    }
    private boolean contains(String filename) {
        for (File f : subFiles) {
            if (f.getName().equalsIgnoreCase(filename))
                return true;
        }
        return false;
    }
    public void run() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("***** 파일 탐색기입니다 *****");
        showSubDirtories();

        while (true) {
            System.out.print(">> ");
            String command = scanner.nextLine().trim();  // 한 라인을 읽고 앞뒤에 입력한 빈칸 지우기
            if (command.equals("그만") || command.equals("exit")) {
                System.out.println("프로그램을 종료합니다.");
                scanner.close();
                break;
            }
            if (command.equals("..")) {
                String s = currentDir.getParent();
                if (s == null)  // s가 null이면, currentDir가 현재 최상위 디렉터리라서 부모 디렉터리가 없음
                    continue;
                else {
                    currentDir = new File(currentDir.getParent());
                    showSubDirtories();
                }
            }
            else {  // command는 서브 디렉터리의 이름
                if (contains(command)) {  // 현재 디렉터리의 파일이나 서브 디렉터리 이면
                    if (new File(currentDir, command).isDirectory()) {  // 디렉터리 이면
                        currentDir = new File(currentDir, command);
                        showSubDirtories();
                    }
                    else {  // 파일인 경우
                        System.out.println("\t디렉터리가 아닙니다.");
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
        FileExplorer fe = new FileExplorer("c:\\");
        fe.run();
    }
}
