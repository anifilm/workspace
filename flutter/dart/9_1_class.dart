// Class

class Person {
  String name;
  int age;

  // Show Method
  void showOuput() {
    print(name);
    print(age);
  }
}

void main() {
  Person person1 = Person();
  person1.name = 'Chaeyoung';
  person1.age = 43;
  person1.showOuput();
}
