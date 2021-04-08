using System;

struct Point {
    public int x;
    public int y;
}

class StructBasic {
    static void Main(string[] args) {
        // new 키워드를 사용하지 않고 구조체 인스턴스 생성
        Point point;
        point.x = 10;
        point.y = 10;

        Console.WriteLine(point.x);
        Console.WriteLine(point.y);
    }
}
