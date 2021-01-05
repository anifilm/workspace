/*
Open Challenge - 사람과 컴퓨터의 가위바위보 대결
사람과 컴퓨터가 가위바위보 게임을 하는 프로그램을 작성하라. 선수 이름은 프로그램 실행
초기에 키 입력받는다. 컴퓨터가 무엇을 낼지는 독자가 마음대로 프로그래밍하면 된다. 저자
는 컴퓨터가 랜덤하게 내도록 코딩하였다. 사람이 키보드로부터 입력받고 <Enter> 키를 치면
곧바로 결과가 나온다. 가위, 바위, 보가 아닌 다른 문자를 입력하면 다시 입력받는다.
  (실행 결과 생략...)
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class AbstractPlayer {
private:
    string name;
protected:
    string gbb[3];  // "가위", "바위", "보"로 생성자에서 설정
public:
    AbstractPlayer(string name) {
        this->name = name;
        gbb[0] = "가위"; gbb[1] = "바위"; gbb[2] = "보";
    }
    virtual string turn() = 0; // 반환하는 값은 "가위", "바위", "보" 중 하나
    string getName() { return name; }
};

class Human : public AbstractPlayer {
public:
    Human(string name) : AbstractPlayer(name) {}
    virtual string turn() {
        string ggb;
        while (1) {
            cout << getName() << ": ";
            getline(cin, ggb);
            if (ggb == "가위" || ggb == "바위" || ggb == "보")
                return ggb;
        }
    }
};

class Computer : public AbstractPlayer {
public:
    Computer() : AbstractPlayer("Computer") {
        srand((unsigned)time(0));
    }
    virtual string turn() {
        int num = rand() % 3;
        return gbb[num];
    }
};

int main() {

    cout << "***** 컴퓨터와 사람이 가위 바위 보 대결을 펼칩니다. *****" << endl;

    string name;
    cout << "선수 이름을 입력하세요: ";
    getline(cin, name);

    Human h(name);
    Computer c;

    string hum, com;

    while (1) {
        hum = h.turn();
        com = c.turn();
        cout << c.getName() << ": " << com << endl;
        if (hum == com)
            cout << "the same" << endl;
        else if (hum == "바위") {
            if (com == "가위")
                cout << h.getName() << " is winner." << endl;
            else
                cout << c.getName() << " is winner." << endl;
        }
        else if (hum == "가위") {
            if (com == "보")
                cout << h.getName() << " is winner." << endl;
            else
                cout << c.getName() << " is winner." << endl;
        }
        else if (hum == "보") {
            if (com == "바위")
                cout << h.getName() << " is winner." << endl;
            else
                cout << c.getName() << " is winner." << endl;
        }
    }

    return 0;
}
