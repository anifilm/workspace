/*
Q4
다음 멤버를 가지고 직사각형을 표현하는 Rectangle 클래스를 작성하라.
 - int 형의 x, y, width, height 필드: 사각형을 구성하는 점과 크기 정보
 - x, y, width, height 값을 매개변수로 받아 필드를 초기화하는 생성자
 - int square(): 사각형의 넓이 반환
 - void show(): 사각형의 좌표와 넓이를 화면에 출력
 - boolean contains(Rectangle r): 매개변수로 받은 r이 현 사각형 안에 있으면 true 반환
 - main() 메서드의 코드와 실행 결과는 다음과 같다.
 (main() 메서드, 실행 결과 생략...)

 */
package chap04.excercise;

class Rectangle {
    private int x, y, width, height;

    public Rectangle(int x, int y, int width, int height) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }
    public int square() {
        return width * height;
    }
    public void show() {
        System.out.println("(" + x + ", " + y + ")에서 크기가 " + width + "x" + height + "인 사각형");
    }
    public boolean contains(Rectangle r) {
        if (x < r.x && y < r.y)
            if ((width+x) > (r.x+r.width) && (height+y) > (r.y+r.height))
                return true;
        return false;
    }
}

public class Q4 {
    public static void main(String[] args) {
        Rectangle r = new Rectangle(2, 2, 8, 7);
        Rectangle s = new Rectangle(5, 5, 6, 6);
        Rectangle t = new Rectangle(1, 1, 10, 10);

        r.show();
        System.out.println("s의 면적은 " + s.square());
        if (t.contains(r)) System.out.println("t는 r을 포함합니다.");
        if (t.contains(s)) System.out.println("t는 s를 포함합니다.");
    }
}
