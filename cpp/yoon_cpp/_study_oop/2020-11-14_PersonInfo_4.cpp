#include <iostream>

using namespace std;

// 구조체 안에 enum 상수를 네임스페이스를 사용하여 구성
namespace PERSON_CONST {
    enum {
        NAME_LEN = 20,
        ADDRESS_LEN = 100
    };
}

struct Person {
    char name[PERSON_CONST::NAME_LEN];
    int age;
    char address[PERSON_CONST::ADDRESS_LEN];

    // 함수를 외부로 빼기 위해서 함수 원형 선언
    void AddAge();
    void ShowPersonInfo();
};

// 함수를 외부로 뺄 수 있다.
void Person::AddAge() { age++; }
void Person::ShowPersonInfo() {
    cout << "이름: " << name << endl;
    cout << "나이: " << age << endl;
    cout << "주소: " << address << endl;
    cout << endl;
}

int main() {

    struct Person p1 {"홍길동", 30, "서울시 용산구 한남동"};
    p1.AddAge();
    p1.ShowPersonInfo();

    struct Person p2 {"고길동", 40, "서울시 서초구 반포동"};
    p2.ShowPersonInfo();

    return 0;
}
