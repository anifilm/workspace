// Rectangle 클래스 만들기 연습
package chap04.section2;

import java.util.Scanner;

class Rectangle {
    int width;
    int height;

    public int getArea() {
        return width * height;
    }
}

public class RectApp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Rectangle rect = new Rectangle();  // 객체 생성
        System.out.print("사각형의 너비와 높이를 입력 >> ");
        rect.width = scanner.nextInt();
        rect.height = scanner.nextInt();
        System.out.println("사각형의 면적은 " + rect.getArea());

        scanner.close();
    }
}
