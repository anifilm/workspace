using System;

class Product {
    public string name;
    public int price;

    public Product(string name, int price) {
        this.name = name;
        this.price = price;
        Console.WriteLine(this.name + "의 생성자 호출");
    }

    // 소멸자
    ~Product() {
        Console.WriteLine(this.name + "의 소멸자 호출");
    }
}

class Destructor {
    static void Main(string[] args) {

        Console.WriteLine("프로그램 시작");

        Product product = new Product("과자", 1000);

        Console.WriteLine(product.name + "은 맛있다.");

        Console.WriteLine("프로그램 종료");
    }
} // <-- 아마도 여기쯤에서 가비지 컬렉터에 의해서 소멸자가 호출 되는듯 하다.

/*
C#에서는 객체의 소멸 시점을 사용자가 정해줄 수 없으므로 소멸자의 호출 시기를 알 수 없다.
소멸자는 가비지 컬렉터에 의해서 객체 소멸시 자동 호출하게 된다.
*/
