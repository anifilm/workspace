#include <iostream>

using namespace std;

#define NAME_LEN 20
#define ADDRESS_LEN 100

struct Person {
    char name[NAME_LEN];
    int age;
    char address[ADDRESS_LEN];
};

void AddAge(Person& person) {
    person.age++;
}

void ShowPersonInfo(const Person& person) {
    cout << "이름: " << person.name << endl;
    cout << "나이: " << person.age << endl;
    cout << "주소: " << person.address << endl;
    cout << endl;
}

int main() {

    Person p1 = {"홍길동", 30, "서울시 용산구 한남동"};
    AddAge(p1);
    ShowPersonInfo(p1);

    Person p2 = {"고길동", 40, "서울시 서초구 반포동"};
    ShowPersonInfo(p2);

    return 0;
}
