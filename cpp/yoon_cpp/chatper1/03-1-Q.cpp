/* 문제 03-1 [구조체 내에 함수정의하기]
2차원 평면상에서의 좌표를 표현할 수 있는 구조체를 다음과 같이 정의하였다.

struct Point {
    int xpos;
    int ypos;
};

위의 구조체를 기반으로 다음의 함수를 정의하고자 한다. (자세한 기능은 실행의 예시를
통해서 확인하도록 한다.)

void MovePos(int x, int y);         // 점의 좌표이동
void AddPoint(const Point& pos);    // 점의 좌표증가
void ShowPosition();                // 현재 x, y 좌표정보 출력

단, 위의 함수들을 구조체 안에 정의를 해서 다음의 형태로 main 함수를 구성할 수 있어야
한다.

int main(void) {

    Point pos1 = {12, 4};
    Point pos2 = {20, 30};

    pos1.MovePos(-7, 10);
    pos1.ShowPosition();        // [5, 14] 출력

    pos1.AddPoint(pos2);
    pos1.ShowPosition();        // [25, 44] 출력

    return 0;
}

그리고 위의 주석에서 보이듯이 실행결과는 다음과 같도록 함수가 정의되어야 한다.

[실행의 예]
[5, 14]
[25, 44]
*/
#include <iostream>

using namespace std;

struct Point {
    int xpos;
    int ypos;

    void MovePos(int x, int y) {        // 점의 좌표이동
        xpos += x;
        ypos += y;
    }
    void AddPoint(const Point& pos){    // 점의 좌표증가
        xpos += pos.xpos;
        ypos += pos.ypos;
    }
    void ShowPosition(){                // 현재 x, y 좌표정보 출력
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};

int main() {

    Point pos1 {12, 4};
    Point pos2 {20, 30};

    pos1.MovePos(-7, 10);
    pos1.ShowPosition();        // [5, 14] 출력

    pos1.AddPoint(pos2);
    pos1.ShowPosition();        // [25, 44] 출력

    return 0;
}
