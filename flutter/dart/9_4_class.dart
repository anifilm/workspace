// Class

class Person {
  String name;
  int age;

  // Default Constructor
  Person(this.name, [this.age = 0]);

  // Named Constructor
  Person.guest() {
    name = 'Guest';
    age = 18;
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

  var person3 = Person.guest();
  person3.showOuput();
}
