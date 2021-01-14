/*
Q10
Vector<Shape>의 백터를 이용하여 그래픽 편집기를 만들어 보자. 본문 5.6절과 5.7절에서 사례로 든 추상 클래스 Shape과 Line, Rect, Circle
클래스 코드를 잘 완성하고 이를 활용하여 "삽입", "삭제", "모두 보기", "종료"의 4가지 그래픽 편집 기능의 프로그램을 작성하라. 6장 실습문제
12번을 Vector<Shape>을 이용하여 재작성하는 연습니다. Vector를 이용하면 6장 실습문제 12번보다 훨씬 간단히 작성됨을 경험할 수 있다.
  (실행 결과 생략...)

 */
package chap07.excercise;
import java.util.*;

abstract class Shape {
    private Shape next;

    public Shape() { next = null; }
    public void setNext(Shape obj) { next = obj; }  // 링크 연결
    public Shape getNext() { return next; }
    public abstract void draw();  // 추상 메서드
}

class Line extends Shape {
    public void draw() {  // 메서드 오버라이딩
        System.out.println("Line");
    }
}

class Rect extends Shape {
    public void draw() {  // 메서드 오버라이딩
        System.out.println("Rect");
    }
}

class Circle extends Shape {
    public void draw() {  // 메서드 오버라이딩
        System.out.println("Circle");
    }
}

public class Q10_GraphicEditor {
    Vector<Shape> v;
    private Scanner scanner;

    public Q10_GraphicEditor() {
        v = new Vector<>();
        scanner = new Scanner(System.in);
    }
    public void insert(int n) {  // 노드 삽입
        Shape obj;
        switch(n) {
            case 1:
                obj = new Line();
                break;
            case 2:
                obj = new Rect();
                break;
            case 3:
                obj = new Circle();
                break;
            default:
                System.out.println("다시 입력하여 주십시오.");
                return;
        }
        v.add(obj);
    }
    public void delete(int n) {  // n번째 노드 삭제
        if (v.size() == 0 || v.size() <= n)
            System.out.println("삭제할 수 없습니다.");
        else
            v.remove(n);
    }
    public void print() {  // 전체 노드 출력
        for (int i = 0; i < v.size(); i++) {
            System.out.print(i + ": ");
            v.get(i).draw();
        }
    }
    public void run() {
        System.out.println("그래픽 에디터 beauty를 실행합니다.");
        while (true) {
            System.out.print("삽입(1), 삭제(2), 모두 보기(3), 종료(4) >> ");
            int select = scanner.nextInt();
            switch (select) {
                case 1:
                    System.out.print("Line(1), Rect(2), Circle(3) >> ");
                    select = scanner.nextInt();
                    insert(select);
                    break;
                case 2:
                    System.out.print("삭제할 도형의 위치 >> ");
                    select = scanner.nextInt();
                    delete(select);
                    break;
                case 3:
                    print();
                    break;
                case 4:
                    System.out.println("beauty를 종료합니다.");
                    scanner.close();
                    return;
            }
        }
    }

    public static void main(String[] args) {
        Q10_GraphicEditor editor = new Q10_GraphicEditor();
        editor.run();
    }
}
