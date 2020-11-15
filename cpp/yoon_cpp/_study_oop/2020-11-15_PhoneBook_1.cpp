#include <iostream>

using namespace std;

#define NAME_LEN 20
#define PHONE_LEN 20
#define ADDRESS_LEN 100
#define COMPANY_LEN 30

namespace COMP_POS {
    enum {CLERK, SENIOR, ASSIST, MANAGER};
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

struct PhoneBook {
    char name[NAME_LEN];
    int age;
    char phone[PHONE_LEN];
    char address[ADDRESS_LEN];
    char company[COMPANY_LEN];
    int position;
};

void ShowPersonInfo(const PhoneBook& person) {
    cout << "이름: " << person.name << endl;
    cout << "나이: " << person.age << endl;
    cout << "전화번호: " << person.phone << endl;
    cout << "주소: " << person.address << endl;
    cout << "회사: " << person.company << endl;
    cout << "직급: ";
    COMP_POS::ShowPositionInfo(person.position);
    cout << endl;
}

int main() {

    struct PhoneBook p1 {"홍길동", 30, "010-1234-5678", "서울시 용산구 한남동", "NCSOFT", COMP_POS::ASSIST};
    ShowPersonInfo(p1);

    struct PhoneBook p2 {"고길동", 40, "010-5548-3345", "서울시 서초구 반포동", "WEBZEN", COMP_POS::MANAGER};
    ShowPersonInfo(p2);

    return 0;
}
