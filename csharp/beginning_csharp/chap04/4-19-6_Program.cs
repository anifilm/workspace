using System;

class Point {
    int x, y;

    public Point(int x, int y) {
        this.x = x; this.y = y;
    }

    public override string ToString() {
        return "X: " + x + ", Y: " + y;
    }
}

abstract class DrawingObject { // 추상 클래스
    public abstract void Draw(); // 추상 메서드 (코드 없는 가상 메서드)

    public void Move() { // 일반 메서드도 정의 가능
        Console.WriteLine("Move");
    }
}

class Line : DrawingObject { // 추상 클래스를 상속받는 Line 클래스
    Point pt1, pt2;

    public Line(Point pt1, Point pt2) {
        this.pt1 = pt1;
        this.pt2 = pt2;
    }

    public override void Draw() { // 추상 클래스의 추상 메서드를 반드시 정의해야 함
        Console.WriteLine("Line " + pt1.ToString() + " ~ " + pt2.ToString());
    }
}

class Program {
    static void Main(string[] args) {
        DrawingObject line = new Line(new Point(10, 10), new Point(20, 20));
        line.Draw(); // 다형성에 따라 Line.Draw가 호출됨.
    }
}
