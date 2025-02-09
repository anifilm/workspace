using System;

public class Currency {
    decimal money;

    public decimal Money { get { return money; } }

    public Currency(decimal money) {
        this.money = money;
    }
}

public class Won : Currency {
    public Won(decimal money) : base(money) { }

    public override string ToString() {
        return Money + "Won";
    }
}

public class Dollar : Currency {
    public Dollar(decimal money) : base(money) { }

    public override string ToString() {
        return Money + "Dollar";
    }
}

public class Yen : Currency {
    public Yen(decimal money) : base(money) { }

    public override string ToString() {
        return Money + "Yen";
    }
}

class Program {
    static void Main(string[] args) {
        /*
        decimal won = 30000;
        decimal dollar = won * 1200;
        decimal yen = won * 13;

        yen = dollar; // 실수로 이렇게 대입해도 컴파일 오류가 발생하지 않는다.
        */

        Won won = new Won(1000);
        Dollar dollar = new Dollar(1);
        Yen yen = new Yen(13);
        // won = yen; // yen과 won의 타입이 다르기 때문에 컴파일 시에 오류 발생
    }
}
