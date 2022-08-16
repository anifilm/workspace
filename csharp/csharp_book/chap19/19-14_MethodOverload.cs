using System;

// 함수(메서드) 오버로드: 동일한 이름의 메서드를 매개 변수를 달리하여 여러 개 생성(다중 정의)
class MethodOverload {
    static void Multi() {
        Console.WriteLine("안녕하세요.");
    }

    static void Multi(string message) {
        Console.WriteLine(message);
    }

    static void Multi(string message, int count) {
        for (int i = 0; i < count; i++) {
            Console.WriteLine("{0}", message);
        }
    }

    static void Main() {
        Multi();
        Multi("반갑습니다.");
        Multi("또 만나요.", 3);
    }
}
