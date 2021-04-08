using System;

class Wanted<T> {
    public T value;

    public Wanted(T value) {
        this.value = value;
    }
}

class GenericBasic {
    static void Main(string[] args) {
        // 제네릭 기본
        Wanted<string> wantedString = new Wanted<string>("String");
        Wanted<int> wantedInt = new Wanted<int>(52273);
        Wanted<double> wantedDouble = new Wanted<double>(52.273);

        Console.WriteLine(wantedString.value);
        Console.WriteLine(wantedInt.value);
        Console.WriteLine(wantedDouble.value);
    }
}
