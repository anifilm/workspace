using System;

struct Point {
    public int x;
    public int y;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

class ConstructorOfStruct {
    static void Main(string[] args) {
        // 구조체의 생성자
        Point point = new Point(); // 매개변수 없이 구조체 인스턴스 생성 가능
                                   // 숫자는 0, 문자열 또는 객체는 null 초기화
        Console.WriteLine(point.x);
        Console.WriteLine(point.y);
    }
}
