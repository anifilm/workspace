// Class

class Person {
  String name;
  int age;

  // Constructor
  /*
  Person(String name, [int age = 0]) {
    this.name = name;
    this.age = age;
  }
  */
  Person(this.name, [this.age = 0]);

  // Show Method
  void showOuput() {
    print(name);
    print(age);
  }
}

void main() {
  Person person1 = Person('Chaeyoung', 43);
  person1.showOuput();
}
