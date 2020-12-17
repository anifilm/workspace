#include <iostream>
#include <cstring>

using namespace std;

namespace COMP_POS {
    enum { CLERK, SENIOR, ASSIST, MANAGER };
    void ShowPositionInfo(int pos) {
        switch(pos) {
            case CLERK:
                cout << "사원" << endl;
                break;
            case SENIOR:
                cout << "주입" << endl;
                break;
            case ASSIST:
                cout << "대리" << endl;
                break;
            case MANAGER:
                cout << "과장" << endl;
                break;
        }
    }
}

// 구조체를 클래스로 변경 (배열을 동적으로 할당하도록 변경)
class PhoneBook {
private:
    char* name;
    int age;
    char* phone;
    char* address;
    char* company;
    int position;
public:
    // 개체 초기화 함수를 생성자로 변경
    PhoneBook(const char* _name, int _age, const char* _phone,
              const char* _address, const char* _company, int _pos);
    void ShowPersonInfo() const;
    ~PhoneBook();
};

// 개체 초기화 함수를 생성자로 변경 (배열을 동적으로 할당)
PhoneBook::PhoneBook(const char* _name, int _age, const char* _phone,
                     const char* _address, const char* _company, int _pos) {
    name = new char[strlen(_name) + 1];
    strcpy(name, _name);
    age = _age;
    phone = new char[strlen(_phone) + 1];
    strcpy(phone, _phone);
    address = new char[strlen(_address) + 1];
    strcpy(address, _address);
    company = new char[strlen(_company) + 1];
    strcpy(company, _company);
    position = _pos;
}

void PhoneBook::ShowPersonInfo() const {
    cout << "이름: " << name << endl;
    cout << "나이: " << age << endl;
    cout << "전화번호: " << phone << endl;
    cout << "주소: " << address << endl;
    cout << "회사: " << company << endl;
    cout << "직급: ";
    COMP_POS::ShowPositionInfo(position);
    cout << endl;
}

// 동적 할당된 배열을 소멸자를 통하여 메모리 해제
PhoneBook::~PhoneBook() {
    delete[] name;
    delete[] phone;
    delete[] address;
    delete[] company;
    cout << "call destructor" << endl;
}

int main() {

    PhoneBook p1("홍길동", 30, "010-1234-5678", "서울시 용산구 한남동", "NCSOFT", COMP_POS::ASSIST);
    p1.ShowPersonInfo();

    PhoneBook p2("고길동", 40, "010-5548-3345", "서울시 서초구 반포동", "WEBZEN", COMP_POS::MANAGER);
    p2.ShowPersonInfo();

    return 0;
}
