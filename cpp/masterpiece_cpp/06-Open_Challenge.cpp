/*
Open Challenge - Up & Down 게임 만들기
Up & Down 게임 프로그램을 작성해 보자. 게임에 참석하는 사람은 2명이며, 번갈아 가며
다음과 같이 숨겨진 답에 접근해 간다. Up & Down 게임은 전체적으로 UpAndDownGame 클래스
로 작성하고 static 멤버로만 구성하라. 선수를 표현하기 위해 Person 클래스를 작성하고
main() 함수는 프로그램을 시작시키는 기능 정도로만 구현하라.
    (실행 결과 생략...)

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Person {
private:
    string name;
public:
    string getName() { return name; }
    void setName(string name) { this->name = name; }
};

class UpAndDownGame {
private:
    static int guessNumber;
    static int minNumber;
    static int maxNumber;
public:
    static void game();
};

// static 클래스 멤버 변수 초기화
int UpAndDownGame::guessNumber;
int UpAndDownGame::minNumber = 0;
int UpAndDownGame::maxNumber = 99;

void UpAndDownGame::game() {
    cout << "Up & Down 게임을 시작합니다." << endl;
    guessNumber = rand() % 100;
    Person p[2];
    p[0].setName("임채영");
    p[1].setName("정흥규");
    int i = 0, num;
    bool isInput = true;
    while (true) {
        cout << "답은 " << minNumber << "과 " << maxNumber << "사이에 있습니다." << endl;
        cout << p[i%2].getName() << ": ";
        cin >> num;
        if (num > minNumber && num < maxNumber) {
            isInput = true;
            if (num < guessNumber) minNumber = num;
            else if (num > guessNumber) maxNumber = num;
            else if (num == guessNumber) {
                cout << p[i%2].getName() << "가 이겼습니다." << endl;
                break;
            }
        }
        else {
            cout << "입력이 잘못되었습니다. 다시 입력하세요." << endl;
            isInput = false;
        }
        if (isInput) {
            isInput = true;
            i++;
        }
    }
}

int main() {
    srand((unsigned)time(0));
    UpAndDownGame::game();
    return 0;
}
