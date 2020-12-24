/*
Q9
게시판 프로그램을 작성해 보자. 멀티태스킹의 경우 여러 사용자들이 게시판에 글을 올리기
때문에 게시판 객체는 전체 하나만 있어야 한다. 그러므로 게시판 객체의 멤버들은 static
으로 작성한다. 다음은 게시판 기능을 하는 Board 클래스를 활용하는 main() 코드이다.
실행 결과를 참고하여 Board 클래스를 만들고 전체 프로그램을 완성하라. static 연습이
목적이기 때문에 게시판 기능을 글을 올리는 기능과 게시글을 모두 출력하는 기능으로 제한
하고 main()도 단순화하였다.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

static const int MAX_LEN = 1000;

class Board {
private:
    static string* messages;
    static int id;
public:
    static void add(string message);
    static void print();
};

string* Board::messages = new string[MAX_LEN];
int Board::id = 0;

void Board::add(string message) {
    Board::messages[id] = message;
    id++;
}

void Board::print() {
    cout << "********** 게시판 입니다 **********" << endl;
    for (int i = 0; i < id; i++)
        cout << i << ": " << Board::messages[i] << endl;
}

int main() {

//  Board myBoard;  // 객체 생성은 컴파일 오류입니다.
    Board::add("중간고사는 감독이 없는 자율 시험입니다.");
    Board::add("코딩 라운지 많이 이용해 주세요.");
    Board::print();
    Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요.");
    Board::print();

    return 0;
}
