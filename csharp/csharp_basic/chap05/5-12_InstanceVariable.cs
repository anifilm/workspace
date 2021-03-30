using System;

class Product {
    public string name;
    public int price;
}

class InstanceVariable {
    static void Main(string[] args) {
        // 인스턴스 변수 생성과 사용
        Product product = new Product();

        product.name = "감자";
        product.price = 2000;

        Console.WriteLine(product.name + ": " + product.price + "원");
    }
}
