/*
Q2
Person 클래스의 객체를 생성하는 main() 함수는 다음과 같다.
  (Person 클래스, main() 함수, 실행 결과 생략...)

  (1) 생성자를 중복 작성하고 프로그램을 완성하라.
  (2) 디폴트 매개 변수를 가진 하나의 생성자를 작성하고 프로그램을 완성하라.
*/
#include <iostream>

using namespace std;

class Person {
private:
    int id;
    double weight;
    string name;
public:
    Person();
    Person(int id, string name);
    Person(int id, string name, double weight);
    void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

Person::Person() {
    this->id = 1;
    this->weight = 20.5;
    this->name = "Grace";
};
Person::Person(int id, string name) {
    this->id = id;
    this->weight = 20.5;
    this->name = name;
}
Person::Person(int id, string name, double weight) {
    this->id = id;
    this->weight = weight;
    this->name = name;
}

int main() {

    Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashley.show();
    helen.show();

    return 0;
}
