// 메서드 오버라이딩 활용
package chap05.section6;

public class UsingOverride {
    public static void main(String[] args) {
        Shape start, last, obj;

        // 링크드 리스트로 도형 생성하여 연결
        start = new Line();  // Line 객체 연결
        last = start;
        obj = new Rect();    // Rect 객체 연결
        last.next = obj;
        last = obj;
        obj = new Line();    // Line 객체 연결
        last.next = obj;
        last = obj;
        obj = new Circle();  // Circle 객체 연결
        last.next = obj;

        Shape p = start;
        while (p != null) {
            p.draw();
            p = p.next;
        }
    }
}
