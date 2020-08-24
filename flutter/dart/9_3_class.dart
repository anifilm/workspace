// Class

class Person {
  String name;
  int age;

  // Constructor
  Person(String name, [int age = 0]) {
    this.name = name;
    this.age = age;
  }

  // Show Method
  void showOuput() {
    print(name);
    print(age);
  }
}

void main() {
  Person person1 = Person('Chaeyoung', 43);
  person1.showOuput();

  var person2 = Person('Jack', 25);
  person2.showOuput();
}
