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
    printf("이름: %s\n", person.name);
    printf("나이: %d\n", person.age);
    printf("주소: %s\n", person.address);
    cout << endl;
}

int main() {

    struct Person p1 {"홍길동", 30, "서울시 용산구 한남동"};
    AddAge(p1);
    ShowPersonInfo(p1);

    struct Person p2 {"고길동", 40, "서울시 서초구 반포동"};
    ShowPersonInfo(p2);

    return 0;
}
