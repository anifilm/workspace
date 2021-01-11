/*
Q12
텍스트로 입출력하는 간단한 그래픽 편집기를 만들어 보자. 본문 5.6절과 5.7절에서 사례로 든 추상 클래스 Shape과 Line, Rect, Circle
클래스 코드를 잘 완성하고 이를 활용하여 아래 실행 예시처럼 "삽입", "삭제", "모두보기", "종료"의 4가지 그래픽 편집 기능을 가진
GraphicEditor 클래스를 작성하라.
  (실행 결과 생략...)

 */
package chap05.excercise;

import java.util.Scanner;

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

public class Q12_GraphicEditor {
    private Shape start, last;
    private Scanner scanner;

    public Q12_GraphicEditor() {
        start = null;  // 시작 노드
        last = null;  // 끝 노드
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
        if (start == null) {  // 시작 노드가 아무것도 가리키지 않으면
            start = obj;  //  start와 last가 새로운 obj를 가리키게 함
            last = start;
        }
        else {
            last.setNext(obj);  // 끝 노드에 새로운 obj를 연결하고
            last = obj;  // 끝 노드는 새로 만들어진 노드를 가리키게 함
        }
    }
    public void delete(int n) {  // n번재 노드 삭제, TODO: 삭제 구문 최적화 검토
        Shape cur = start;  // 현재 노드
        Shape prev = start;
        int i;
        if (n == 0) {  // 첫 번째 노드를 삭제하는 경우
            if (start == last) {  // 노드가 한개일 경우
                start = last = null;
                return;
            }
            else {  // 노드가 두개 이상
                start = start.getNext();
                return;
            }
        }
        for (i = 1; i < n; i++) {
            prev = cur;  // 현재 노드를 저장한 후
            cur = cur.getNext();  // 다음 노드로 이동
            if (cur == null) {  // 노드 수가 입력 값보다 작을 때
                System.out.println("삭제할 수 없습니다.");
                return;
            }
        }
        if (i == n) {  // 끝 노드를 가리킬 때
            prev.setNext(cur.getNext());
            last = prev;
        }
        else  // 끝 노드가 아니라면 이전 노드가 다음 노드를 가리킴
            prev.setNext(cur.getNext());
    }
    public void print() {  // 전체 노드 출력
        Shape p = start;
        int i = 0;
        while (p != null) {
            System.out.print(i + ": ");
            p.draw();
            p = p.getNext();
            i++;
        }
    }
    public void run() {
        System.out.println("그래픽 에더터 beauty를 실행합니다.");
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
        Q12_GraphicEditor editor = new Q12_GraphicEditor();
        editor.run();
    }
}
