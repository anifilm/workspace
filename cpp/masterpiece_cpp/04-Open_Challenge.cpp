/*
Open Challenge 한글 끝말잇기 게임
n명이 하는 한글 끝말 잇기 게임을 작성해보자. 아래의 결과와 같이 선수의 수를 입력받고,
선수 각 사람의 이름을 입력받아 게임을 시작한다.
  (실행 결과 생략...)

힌트
  (1) 3개의 모듈로 나누어라.
    - WordGame 클래스: 끝말잇기 게임 전체를 운영하는 클래스
    - Player 클래스: 선수를 표현하는 클래스
    - main() 함수: WordGame 객체를 생성하고 게임을 시작하는 함수

  (2) 한글 문제
  한글 문자열을 저장하기 위해 string 클래스를 이용하라. 한글은 2바이트 코드로 저장되므로
  string 객체에 저장된 한글 문자열에서 끝 글자를 비교하려면 두 바이트를 함께 비교하여야
  한다. 예를 들면 다음과 같다.

    string a = "아버지";  // 6개의 바이트에 저장, a.size()는 6 (3이 아님)
    string b = "지우개";  // 6개의 바이트에 저장
    if (a.at(4) == b.at(0) && a.at(5) == b.at(1)) {  // "아버지"의 '지'와 "지우개"의 '지'를 비교
        // 끝말잇기 성공한 경우 처리 코드
    }
    else {
        // 실패한 경우 처리 코드
    }

*/
#include <iostream>

using namespace std;

class Player {
private:
    string name;
public:
    string getName() { return this->name; };
    void setName(string name) { this->name = name; };
};

class WordGame {
private:
    int user;
    Player* player;
    string word = "아버지";
public:
    WordGame(int n) {
        this->user = n;
        player = new Player[n];
    }
    ~WordGame() { delete[] player; }
    string getWord() { return this->word; };
    bool checkWord(string word);
    void game();
};

bool WordGame::checkWord(string word) {
    string a = this->word;
    string b = word;
    if (a.length() == 6) {
        // 입력된 문자열이 세 글자인 경우
        if (a.at(4) == b.at(0) && a.at(5) == b.at(1)) {
            this->word = b;
            return true;
        }
    }
    else if (a.length() == 4) {
        // 입력된 문자열이 두 글자인 경우
        if (a.at(2) == b.at(0) && a.at(3) == b.at(1)) {
            this->word = b;
            return true;
        }
    }
    return false;
}

void WordGame::game() {
    string name;
    for (int i = 0; i < user; i++) {
        string name;
        cout << "참자가의 이름을 입력하세요. 빈칸없이: ";
        cin >> name;
        player[i].setName(name);
    }
    cout << "시작하는 단어는 " << getWord() << " 입니다." << endl;
    string word;
    int count = 0;
    while (true) {
        cout << player[count].getName() << ": ";    // 사용자 이름 출력
        cin >> word;
        if (!checkWord(word)) {
            cout << "\n" << player[count].getName() << "님이 틀렸습니다." << endl;
            cout << "게임을 종료합니다." << endl;
            break;
        }
        if (count < user - 1) count++;
        else count = 0;
    }
}

int main() {

    // 한글 입출력을 위한 설정 (파일은 EUC-KR로 저장할 것!)
    system("chcp 949");

    cout << "끝말 잇기 게임을 시작합니다." << endl;
    int n;
    cout << "게임에 참가하는 인원은 몇명입니까? ";
    cin >> n;
    WordGame wordgame(n);
    wordgame.game();

    return 0;
}
