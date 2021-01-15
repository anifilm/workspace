/*
Q1
Scanner로 입력받은 이름과 전화번호를 한 줄에 한 사람씩 phone.txt 파일에 저장하라. "그만"을 입력하면 프로그램을 종료한다.
  (실행 결과 생략...)

 */
package chap08.excercise;
import java.io.*;
import java.util.*;

class Phone {
    private String name;
    private String phoneNum;

    public Phone(String name, String phoneNum) {
        this.name = name;
        this.phoneNum = phoneNum;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getPhoneNum() {
        return phoneNum;
    }
    public void setPhoneNum(String phoneNum) {
        this.phoneNum = phoneNum;
    }
}
public class Q1_PhoneWriter {
    public static void main(String[] args) {
        Vector<Phone> v = new Vector<>();

        System.out.println("전화번호 입력 프로그램입니다.");
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.print("이름 전화번호 >> ");
            String name = scanner.next();
            if (name.equals("그만")) break;
            String phoneNum = scanner.next();
            v.add(new Phone(name, phoneNum));
        }

        FileWriter fout = null;
        File file = new File("src/chap08/phone.txt");
        try {
            fout = new FileWriter(file);
            for (int i = 0; i < v.size(); i++) {
                String name = v.get(i).getName();
                String phoneNum = v.get(i).getPhoneNum();
                fout.write(name + " " + phoneNum + "\r\n");
            }
            System.out.println(file.getPath() + "에 저장하였습니다.");
            fout.close();
        }
        catch (IOException e) {
            System.out.println("입출력 오류");
        }

        scanner.close();
    }
}
