using System;

class InstanceVariables {

    class User {
        // 5-11: 인스턴스 변수 선언
        public string name;
        public string password;
        public string address;
        public string phoneNumber;
        public DateTime regDate;
    }

    // 5-14: 인스턴스 변수를 생성할 때 초기화
    class Product {
        public string name = "default";
        public int price = 1000;
    }

    // 5-17: 학생 추상화
    class Student {
        public string id;
        public string name;
        public int grade;
        public string major;
        public DateTime birthday;
    }

    static void Main(string[] args) {
        // 5-15: 생성과 동시에 인스턴스 변수 초기화
        Product productA = new Product() { name = "감자", price = 2000 };
        Product productB = new Product() { name = "고구마", price = 3000 };
    }
}
