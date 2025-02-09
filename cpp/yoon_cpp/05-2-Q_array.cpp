/* 문제 05-1 [복사 생성자의 정의]
문제 04-3의 문제 2를 통해서 NameCard 클래스를 정의하였다. 그런데 이 클래스도 생성자
내에서 메모리 공간을 동적 할당하기 때문에 복사 생성자가 필요한 클래스이다. 이에 복사
생성자를 적절히 정의해보기 바라며, 복사 이후에 문제가 발생하지 않음을 다음 main 함수를
통해서 확인하기 바란다.

[main 함수의 예]
int main(void) {
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard copy1 = manClerk;
    NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
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

class NameCard {
private:
    char* name;
    char* company;
    char* phone;
    int position;
public:
    NameCard(const char* _name, const char* _company, const char* _phone, int _pos)
        : position(_pos) {
            name = new char[strlen(_name) + 1];
            company = new char[strlen(_company) + 1];
            phone = new char[strlen(_phone) + 1];
            strcpy(name, _name);
            strcpy(company, _company);
            strcpy(phone, _phone);
    }
    // 복사 생성자 (copy constructor), 개체 생성시 깊은 복사가 되도록 직접 정의할 수 있다.
    NameCard(const NameCard& copy)
        : position(copy.position) {
            name = new char[strlen(copy.name) + 1];
            strcpy(name, copy.name);
            company = new char[strlen(copy.company) + 1];
            strcpy(company, copy.company);
            phone = new char[strlen(copy.phone) + 1];
            strcpy(phone, copy.phone);
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
        delete[] name;
        delete[] company;
        delete[] phone;
        cout << "called destructor" << endl;
    };
};

int main() {

    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard copy1(manClerk);
    NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard copy2(manSenior);
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();

    return 0;
}
