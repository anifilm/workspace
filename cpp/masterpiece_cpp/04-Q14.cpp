/*
Q14
갬블링 게임을 만들어 보자. 두 사람이 게임을 진행하며, 선수의 이름을 초기에 입력 받는다.
선수가 번갈아 자신의 차례에서 <Enter> 키를 치면 랜덤한 3개의 수가 생성되고 모두 동일한
수가 나오면 게임에서 이기게 된다. 숫자의 범위가 너무 크면 3개의 숫자가 일치할 가능성이
낮아 숫자의 범위를 0~2로 제한한다. 랜덤 정수 생성은 문제 5번의 힌트를 참고하라. 선수는
Player 클래스로 작성하고, 2명의 선수는 배열로 구성하라. 그림고 게임은 GamblingGame
클래스로 작성하라.
  (실행 결과 생략...)

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player {
private:
    string name;
public:
    string getName() { return name; }
    void setName(string name) { this->name = name; }
};

class GamblingGame {
    Player p[2];
    int randNum[3];
public:
    GamblingGame() { srand((unsigned)time(0)); }
    int getRandNumber() { return rand() % 3; }
    void getPlayerName();
    bool checkRandNumber();
    void run();
};

void GamblingGame::getPlayerName() {
    string name;
    cout << "첫번째 선수 이름: ";
    cin >> name;
    p[0].setName(name);
    cout << "두번째 선수 이름: ";
    cin >> name;
    p[1].setName(name);
    cin.ignore();
}

bool GamblingGame::checkRandNumber() {
    randNum[0] = getRandNumber();
    randNum[1] = getRandNumber();
    randNum[2] = getRandNumber();
    cout << '\t' << randNum[0] << '\t' << randNum[1] << '\t' << randNum[2] << '\t';
    if (randNum[0] == randNum[1] && randNum[1] == randNum[2])
        return true;
    else
        return false;
}

void GamblingGame::run() {
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
    getPlayerName();
    string enter;
    while (true) {
        // 첫번째 선수
        cout << p[0].getName() << ": ";
        getline(cin, enter, '\n');
        if (checkRandNumber()) {
            cout << p[0].getName() << "님 승리!!";
            break;
        }
        else
            cout << "아쉽군요!" << endl;
        // 두번째 선수
        cout << p[1].getName() << ": ";
        getline(cin, enter, '\n');
        if (checkRandNumber()) {
            cout << p[1].getName() << "님 승리!!";
            break;
        }
        else
            cout << "아쉽군요!" << endl;
    }
    cout << endl;
}

int main() {
    GamblingGame game;
    game.run();
    return 0;
}
