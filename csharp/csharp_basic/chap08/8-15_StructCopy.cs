using System;

class PointClass {
    public int x;
    public int y;

    public PointClass(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

struct PointStruct {
    public int x;
    public int y;

    public PointStruct(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

class StructCopy {
    static void Main(string[] args) {
        // 클래스
        PointClass pointClassA = new PointClass(10, 20);
        PointClass pointClassB = pointClassA; // 참조 복사

        pointClassB.x = 100;
        pointClassB.y = 200;

        Console.WriteLine("pointClassA: " + pointClassA.x + ", " + pointClassA.y);
        Console.WriteLine("pointClassB: " + pointClassB.x + ", " + pointClassB.y);
        Console.WriteLine();

        // 구조체
        PointStruct pointStructA = new PointStruct(10, 20);
        PointStruct pointStructB = pointStructA; // 값 복사

        pointStructB.x = 100;
        pointStructB.y = 200;

        Console.WriteLine("pointStuctA: " + pointStructA.x + ", " + pointStructA.y);
        Console.WriteLine("pointStuctB: " + pointStructB.x + ", " + pointStructB.y);
    }
}
