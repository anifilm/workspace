#include <iostream>

using namespace std;

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
    enum {
        NAME_LEN = 20,
        PHONE_LEN = 20,
        ADDRESS_LEN = 100,
        COMPANY_LEN = 30,
    };
    char name[NAME_LEN];
    int age;
    char phone[PHONE_LEN];
    char address[ADDRESS_LEN];
    char company[COMPANY_LEN];
    int position;

    // 함수를 구조체 안에 포함시키기
    void ShowPersonInfo() const  {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
        cout << "전화번호: " << phone << endl;
        cout << "주소: " << address << endl;
        cout << "회사: " << company << endl;
        cout << "직급: ";
        COMP_POS::ShowPositionInfo(position);
        cout << endl;
    }
};

int main() {

    struct PhoneBook p1 {"홍길동", 30, "010-1234-5678", "서울시 용산구 한남동", "NCSOFT", COMP_POS::ASSIST};
    p1.ShowPersonInfo();

    struct PhoneBook p2 {"고길동", 40, "010-5548-3345", "서울시 서초구 반포동", "WEBZEN", COMP_POS::MANAGER};
    p2.ShowPersonInfo();

    return 0;
}
