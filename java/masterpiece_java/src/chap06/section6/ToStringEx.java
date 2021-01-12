// Point 클래스에 toString() 작성
package chap06.section6;

class Point2 {
    int x, y;

    public Point2(int x, int y) {
        this.x = x;
        this.y = y;
    }
    @Override
    public String toString() {  // Point 객체를 문자열로 반환하는 toString() 작성
        return "Point(" + x + ", " + y + ')';
    }
}

public class ToStringEx {
    public static void main(String[] args) {
        Point2 p = new Point2(2, 3);
        System.out.println(p.toString());
        System.out.println(p);  // p는 p.toString()으로 자동 변환
        System.out.println(p + " 입니다.");  // p.toString() + "입니다"로 자동 변환
    }
}
