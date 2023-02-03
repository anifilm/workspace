using System;

class Person {
    string _name;

    public Person(string name) {
        _name = name;
    }

    public void WriteName() {
        Console.WriteLine("Name: " + _name);
    }
}

class Program {
    static void Main() {
        Person person = new Person("영희");
        person.WriteName();
    }
}
