using System;
using System.Collections.Generic;

class Product {
    public string Name { get; set; }
    public int Price { get; set; }
}

class UnnamedDelegateBasic {
    static void Main(string[] args) {
        // 무명 델리게이터 기본
        List<Product> products = new List<Product>() {
            new Product() { Name = "감자", Price = 500 },
            new Product() { Name = "사과", Price = 700 },
            new Product() { Name = "고구마", Price = 400 },
            new Product() { Name = "배추", Price = 600 },
            new Product() { Name = "상추", Price = 300 }
        };
        // 무명 델리게이터로 정렬 방법을 정의
        products.Sort(delegate(Product a, Product b) {
            return a.Price.CompareTo(b.Price);
        });

        foreach (var item in products) {
            Console.WriteLine(item.Name + " : " + item.Price);
        }
    }
}
