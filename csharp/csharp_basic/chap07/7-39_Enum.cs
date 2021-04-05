using System;

enum OrderState { Orderd, Paymented, Prepared, Sended };

class Enum {
    static OrderState OrderCheck(int orderId) {
        return OrderState.Orderd;
    }

    static void Main(string[] args) {
        // 열거자
        if (OrderCheck(12345) == OrderState.Orderd) {
            Console.WriteLine("주문이 완료되었습니다.");
        }
    }
}
