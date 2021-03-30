using System;

class Product {
    public static int counter = 0;
    public int id;
    public string name;
    public int price;

    public Product(string name, int price) {
        Product.counter++;
        this.id = counter;
        this.name = name;
        this.price = price;
    }
}

class ConstructorWithCounter {
    static void Main(string[] args) {
        // 인스턴스 생성 개수 확인
        Product productA = new Product("감자", 2000);
        Product productB = new Product("고구마", 3000);

        Console.WriteLine(productA.id + ": " + productA.name);
        Console.WriteLine(productB.id + ": " + productB.name);
        Console.WriteLine(Product.counter + "개 생성되었습니다.");
    }
}
