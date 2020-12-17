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

// 구조체를 클래스로 변경
class Person {
private:
    char name[PERSON_CONST::NAME_LEN];
    int age;
    char address[PERSON_CONST::ADDRESS_LEN];
public:
    // 개체 초기화 함수 추가
    void InitMembers(const char* _name, int _age, const char* _address);
    void AddAge();
    void ShowPersonInfo();
};

// 개체 초기화 함수 추가
void Person::InitMembers(const char* _name, int _age, const char* _address) {
    strcpy(name, _name);
    age = _age;
    strcpy(address, _address);
}
void Person::AddAge() { age++; }
void Person::ShowPersonInfo() {
    cout << "이름: " << name << endl;
    cout << "나이: " << age << endl;
    cout << "주소: " << address << endl;
    cout << endl;
}

int main() {

//  Person p1 = {"홍길동", 30, "서울시 용산구 한남동"};
//  Person p2 = {"고길동", 40, "서울시 서초구 반포동"};

    // 클래스 선언된 개체 초기화
    Person p1;
    // 클래스 선언된 개체 초기화 함수를 통한 데이터 선언
    p1.InitMembers("홍길동", 30, "서울시 용산구 한남동");
    p1.AddAge();
    p1.ShowPersonInfo();

    // 클래스 선언된 개체 초기화
    Person p2;
    // 클래스 선언된 개체 초기화 함수를 통한 데이터 선언
    p2.InitMembers("고길동", 40, "서울시 서초구 반포동");
    p2.ShowPersonInfo();

    return 0;
}
