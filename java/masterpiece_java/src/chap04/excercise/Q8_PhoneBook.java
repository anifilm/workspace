/*
Q8
이름(name), 전화번호(tel) 필드와 생성자 등을 가진 Phone 클래스를 작성하고, 실행 예시와 같이 동작하는 PhoneBook 클래스를 작성하라.
  (실행 결과 생략...)

 */
package chap04.excercise;

import java.util.Scanner;

class Phone {
    private String name;
    private String tel;

    public Phone(String name, String tel) {
        this.name = name;
        this.tel = tel;
    }
    public String getName() { return name; }
    public String getTel() { return tel; }
}

public class Q8_PhoneBook {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("인원수 >> ");
        int n = scanner.nextInt();
        Phone[] phone = new Phone[n];
        for (int i = 0; i < phone.length; i++) {
            System.out.print("이름과 전화번호(이름과 번호는 빈 칸없이 입력) >> ");
            String name = scanner.next();
            String tel = scanner.next();
            phone[i] = new Phone(name, tel);
        }
        System.out.println("저장되었습니다.");

        int i;
        while (true) {
            System.out.println("검색할 이름 >> ");
            String name = scanner.next();
            // 종료 조건
            if (name.equals("그만")) {
                System.out.println("프로그램을 종료합니다.");
                break;
            }
            // 이름으로 검색
            for (i = 0; i < phone.length; i++) {
                if (name.equals(phone[i].getName())) {
                    System.out.println(phone[i].getName() + "의 번호는 " + phone[i].getTel() + " 입니다.");
                    break;
                }
            }
            if (i == phone.length) System.out.println(name + "이 없습니다.");
        }

        scanner.close();
    }
}
