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

delegate bool CompareDelegate(object arg1, object arg2); // object 인자 2개

class SortObject {
    object[] things;

    public SortObject(object[] things) { // object 배열
        this.things = things;
    }

    public void Sort(CompareDelegate compareMethod) {
        object temp;

        for (int i = 0; i < things.Length; i++) {
            int lowPos = i;
            for (int j = i + 1; j < things.Length; j++) {
                if (compareMethod(things[j], things[lowPos])) {
                    lowPos = j;
                }
            }

            temp = things[lowPos];
            things[lowPos] = things[i];
            things[i] = temp;
        }
    }

    public void Display() {
        for (int i = 0; i < things.Length; i++) {
            Console.Write(things[i]);
            if (i == things.Length - 1) break;
            Console.Write(", ");
        }
        Console.WriteLine();
    }
}

class Program {
    static void Main(string[] args) {
        Person[] personArray = new Person[]  {
                new Person(51, "Anders"),
                new Person(37, "Scott"),
                new Person(45, "Peter"),
                new Person(62, "Mads"),
            };

        SortObject so = new SortObject(personArray);
        so.Sort(AscSortByName);
        so.Display();
    }

    static bool AscSortByName(object arg1, object arg2) {
        Person person1 = arg1 as Person; // 대상 타입으로 형변환
        Person person2 = arg2 as Person;
        return person1.Name.CompareTo(person2.Name) < 0;
    }
}
