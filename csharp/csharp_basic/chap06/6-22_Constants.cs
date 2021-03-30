using System;

class MyMath {
    // 6-23: 상수 생성
    public const double PI = 3.141592;
}

class Product {
    // 6-25: readonly 키워드
    private static int count;
    public readonly int id; // 읽기 전용 변수
    public string name;
    public int price;

    public Product(string name, int price) {
        id = count++; // 읽기 전용 변수는 생성자에서만 변경 가능
        this.name = name;
        this.price = price;
    }
}

class Constants {
    static void Main(string[] args) {
        // 6-22: 상수 값 변경
        //MyMath.PI = 20; // 상수 값 변경시 오류 발생
        int r = 10;
        Console.WriteLine("원의 둘레: " + (2 * MyMath.PI * r));
        Console.WriteLine("원의 넓이: " + (MyMath.PI * r * r));

        // 6-24: 메서드 내부에서 상수 사용
        const int value = 10;
        Console.WriteLine(value);
    }
}
