#include <iostream>
#include <cstring>

using namespace std;

// 구조체 안에 enum 상수를 네임스페이스를 사용하여 구성
namespace PHONEBOOK_CONST {
    enum {
        NAME_LEN = 20,
        PHONE_LEN = 20,
        ADDRESS_LEN = 100,
        COMPANY_LEN = 30,
    };
}

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

// 구조체를 클래스로 변경
class PhoneBook {
private:
    char name[PHONEBOOK_CONST::NAME_LEN];
    int age;
    char phone[PHONEBOOK_CONST::PHONE_LEN];
    char address[PHONEBOOK_CONST::ADDRESS_LEN];
    char company[PHONEBOOK_CONST::COMPANY_LEN];
    int position;
public:
    // 개체 초기화 함수 추가
    void InitMembers(const char* _name, int _age, const char* _phone,
                     const char* _address, const char* _company, int _pos);
    void ShowPersonInfo() const;
};

// 개체 초기화 함수 추가
void PhoneBook::InitMembers(const char* _name, int _age, const char* _phone,
                            const char* _address, const char* _company, int _pos) {
    strcpy(name, _name);
    age = _age;
    strcpy(phone, _phone);
    strcpy(address, _address);
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

int main() {

    PhoneBook p1;
    p1.InitMembers("홍길동", 30, "010-1234-5678", "서울시 용산구 한남동", "NCSOFT", COMP_POS::ASSIST);
    p1.ShowPersonInfo();

    PhoneBook p2;
    p2.InitMembers("고길동", 40, "010-5548-3345", "서울시 서초구 반포동", "WEBZEN", COMP_POS::MANAGER);
    p2.ShowPersonInfo();

    return 0;
}
