#include <iostream>
#include <cstring>

using namespace std;

// 구조체 안에 enum 상수를 네임스페이스를 사용하여 구성
namespace PERSON_CONST {
    enum {
        NAME_LEN = 20,
        ADDRESS_LEN = 100
    };
}

// 구조체를 클래스로 변경 (배열을 동적으로 할당하도록 변경)
class Person {
private:
    char* name;
    int age;
    char* address;
public:
    // 개체 초기화 함수를 생성자로 변경
    Person(const char* _name, int _age, const char* _address);
    void AddAge();
    void ShowPersonInfo();
    ~Person();
};

// 개체 초기화 함수를 생성자로 변경 (배열을 동적으로 할당)
Person::Person(const char* _name, int _age, const char* _address) {
    name = new char[strlen(_name) + 1];
    strcpy(name, _name);
    address = new char[strlen(_address) + 1];
    strcpy(address, _address);
    age = _age;
}
void Person::AddAge() { age++; }
void Person::ShowPersonInfo() {
    printf("이름: %s\n", name);
    printf("나이: %d\n", age);
    printf("주소: %s\n", address);
    cout << endl;
}
// 동적 할당된 배열을 소멸자를 통하여 메모리 해제
Person::~Person() {
    delete[] name;
    delete[] address;
    cout << "call destructor" << endl;
}

int main() {

    // 클래스 선언된 개체 생성자를 통한 초기화
    Person p1 {"홍길동", 30, "서울시 용산구 한남동"};
    p1.AddAge();
    p1.ShowPersonInfo();

        // 클래스 선언된 개체 생성자를 통한 초기화
    Person p2 {"고길동", 40, "서울시 서초구 반포동"};
    p2.ShowPersonInfo();

    return 0;
}
