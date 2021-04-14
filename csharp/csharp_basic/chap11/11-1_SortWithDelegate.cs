using System;
using System.Collections.Generic;

class Product {
    public string Name { get; set; }
    public int Price { get; set; }
}

class SortWithDelegate {
    static void Main(string[] args) {
        // Sort() 메서드의 매개변수로 메서드 전달
        List<Product> products = new List<Product>() {
            new Product() { Name = "감자", Price = 500 },
            new Product() { Name = "사과", Price = 700 },
            new Product() { Name = "고구마", Price = 400 },
            new Product() { Name = "배추", Price = 600 },
            new Product() { Name = "상추", Price = 300 }
        };
        products.Sort(SortWithPrice); // Sort() 메서드의 인수로 메서드를 지정

        foreach (var item in products) {
            Console.WriteLine(item.Name + " : " + item.Price);
        }
    }

    static int SortWithPrice(Product a, Product b) {
        return a.Price.CompareTo(b.Price);
    }
}
