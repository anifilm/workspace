/* 문제 04-3 [C++ 기반의 데이터 입출력]
문제 2
명함을 의미하는 NameCard 클래스를 정의해보자. 이 클래스에는 다음의 정보가 저장되어야
한다.
 - 성명
 - 회사이름
 - 전화번호
 - 직급

단, 직급 정보를 제외한 나머지는 문자열의 형태로 저장을 하되, 길이에 딱 맞는 메모리 공간
을 할당 받는 형태로 정의하자(동적 할당하라는 의미이다). 그리고 직급 정보는 int형 멤버
변수를 선언해서 저장을 하되, 아래의 enum 선언을 활용해야 한다.
enum {CLERK, SENIOR, ASSIST, MANAGER};

위의 enum 선언에서 정의된 상수는 순서대로 사원, 주임, 대리, 과장을 뜻한다. 그럼 다음
main 함수와 실행의 예를 참조하여, 이 문제에서 원하는 형태대로 NameCard 클래스를 완성
해보자.

int main(void) {
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}
*/
#include <iostream>

using namespace std;

namespace COMP_POS {
    enum {CLERK, SENIOR, ASSIST, MANAGER};
}

class NameCard {
private:
    string name;
    string company;
    string phone;
    int rank;
public:
    NameCard(const char* myName, const char* myCompany, const char* myPhone, int myRank)
        : name {myName}, company {myCompany}, phone {myPhone}, rank {myRank} {
    }
    void ShowNameCardInfo() {
        cout << "이름: " << name << endl;
        cout << "회사: " << company << endl;
        cout << "전화번호: " << phone << endl;
        cout << "직급: ";
        switch(rank) {
            case COMP_POS::CLERK:
                cout << "사원" << endl;
                break;
            case COMP_POS::SENIOR:
                cout << "주입" << endl;
                break;
            case COMP_POS::ASSIST:
                cout << "대리" << endl;
                break;
            case COMP_POS::MANAGER:
                cout << "과장" << endl;
                break;
        }
        cout << endl;
    }
};

int main() {

    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();

    return 0;
}
