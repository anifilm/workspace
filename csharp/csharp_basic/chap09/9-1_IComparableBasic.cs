using System;
using System.Collections.Generic;

class Product : IComparable {
    public string name { get; set; }
    public int price { get; set; }

    public override string ToString() {
        return name + ": " + price + "원";
    }

    public int CompareTo(object obj) {
        return this.price.CompareTo((obj as Product).price);
    }
}
class IComparableBasic {
    static void Main(string[] args) {
        // 기본 클래스와 자료 생성
        List<Product> list = new List<Product>() {
            new Product() { name = "고구마", price = 1500 },
            new Product() { name = "사과", price = 2400 },
            new Product() { name = "바나나", price = 1000 },
            new Product() { name = "배", price = 3000 }
        };
        list.Sort();

        foreach (var item in list) {
            Console.WriteLine(item);
        }
    }
}
