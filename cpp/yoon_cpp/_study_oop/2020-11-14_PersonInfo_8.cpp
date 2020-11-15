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
    // 개체 초기화 함수를 생성자로 변경 (this 포인터 사용)
    Person(const char* name, int age, const char* address);
    void AddAge();
    void ShowPersonInfo();
    ~Person();
};

// 개체 초기화 함수를 생성자로 변경 (this 포인터 사용)
Person::Person(const char* name, int age, const char* address)
    : age(age) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->address = new char[strlen(address) + 1];
    strcpy(this->address, address);
}
void Person::AddAge() { age++; }
void Person::ShowPersonInfo() {
    cout << "이름: " << name << endl;
    cout << "나이: " << age << endl;
    cout << "주소: " << address << endl;
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
