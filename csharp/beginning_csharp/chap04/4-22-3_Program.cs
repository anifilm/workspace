using System;

class Person {
    public int Age;
    public string Name;

    public Person(int age, string name) {
        this.Age = age;
        this.Name = name;
    }

    public override string ToString() {
        return Name + ": " + Age;
    }
}

class SortPerson {
    Person[] men;

    public SortPerson(Person[] men) {
        this.men = men;
    }

    public void Sort() {
        Person temp;

        for (int i = 0; i < men.Length; i++) {
            int lowPos = i;
            for (int j = i + 1; j < men.Length; j++) {
                if (men[j].Age < men[lowPos].Age) {
                    lowPos = j;
                }
            }

            temp = men[lowPos];
            men[lowPos] = men[i];
            men[i] = temp;
        }
    }

    public void Display() {
        for (int i = 0; i < men.Length; i++) {
            Console.Write(men[i]);
            if (i == men.Length - 1) break;
            Console.Write(", ");
        }
        Console.WriteLine();
    }
}

class Program {
    static void Main(string[] args) {
        Person[] personArray = new Person[] {
            new Person(51, "Anders"),
            new Person(37, "Scott"),
            new Person(45, "Peter"),
            new Person(62, "Mads"),
        };

        SortPerson so = new SortPerson(personArray);
        so.Sort();
        so.Display();
    }
}
