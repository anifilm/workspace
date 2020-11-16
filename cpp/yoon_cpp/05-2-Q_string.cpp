/* 문제 05-1 [복사 생성자의 정의]
문제 04-3의 문제 2를 통해서 NameCard 클래스를 정의하였다. 그런데 이 클래스도 생성자
내에서 메모리 공간을 동적 할당하기 때문에 복사 생성자가 필요한 클래스이다. 이에 복사
생성자를 적절히 정의해보기 바라며, 복사 이후에 문제가 발생하지 않음을 다음 main 함수를
통해서 확인하기 바란다.

[main 함수의 예]
int main(void) {
    NameCard manClerk {"Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK};
    NameCard copy1 = manClerk;
    NameCard manSenior {"Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR};
    NameCard copy2 = manSenior;
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
    return 0;
}
*/
#include <iostream>
#include <cstring>

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

class NameCard {
private:
    string name;
    string company;
    string phone;
    int position;
public:
    NameCard(const char* _name, const char* _company, const char* _phone, int _pos)
        : name {_name}, company {_company}, phone {_phone}, position {_pos} {
    }
    // 복사 생성자 (copy constructor), 정의하지 않아도 자동을 생성되며 사용 가능하다
    NameCard(const NameCard& copy)
        : name {copy.name}, company {copy.company}, phone {copy.phone}, position {copy.position} {
    }
    void ShowNameCardInfo() {
        cout << "이름: " << name << endl;
        cout << "회사: " << company << endl;
        cout << "전화번호: " << phone << endl;
        cout << "직급: ";
        COMP_POS::ShowPositionInfo(position);
        cout << endl;
    }
    ~NameCard() {
        cout << "called destructor" << endl;
    };
};

int main() {

    NameCard manClerk {"Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK};
    NameCard copy1 {manClerk};
    NameCard manSenior {"Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR};
    NameCard copy2 {manSenior};
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();

    return 0;
}
