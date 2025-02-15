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

    static public explicit operator Won(Dollar dollar) {
        return new Won(dollar.Money * 1000m);
    }
}

public class Yen : Currency {
    public Yen(decimal money) : base(money) { }

    public override string ToString() {
        return Money + "Yen";
    }

    static public implicit operator Won(Yen yen) {
        return new Won(yen.Money * 13m); // 1Yen 당 13원으로 가정
    }
}

class Program {
    static void Main(string[] args) {
        Yen yen = new Yen(100);

        Won won1 = yen; // 암시적(implicit) 형변환 가능
        Won won2 = (Won)yen; // 명시적(explicit) 형변환 가능

        Console.WriteLine(won1); // 출력 결과: 1300Won

        Dollar dollar = new Dollar(1);

        //Won won3 = dollar; // 암시적(implicit) 형변환 불가능 (컴파일 오류 발생)
        Won won4 = (Won)dollar; // 명시적(explicit) 형변환 가능

        Console.WriteLine(won4); // 출력 결과: 1000Won
    }
}
