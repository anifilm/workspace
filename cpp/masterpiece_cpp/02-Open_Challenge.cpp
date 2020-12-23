/*
Open Challenge - 가위 바위 보 게임 만들기
두 사람이 하는 가위, 바위, 보 게임을 만들어 보자. 두 사람의 이름은 '로미오'와 '줄리엣'
으로 한다. 먼저 "로미오: "를 출력하고 '로미오'로부터 "가위", "바위", "보" 중 하나의
문자열을 입력받고, 다시 "줄리엣: "을 출력하고 '줄리엣'으로부터 "가위", "바위", "보" 중
하나의 문자열을 입력받는다. 누가 이겼는지 판단하여 승자를 출력한다.
비기게 되면 "비겼습니다."라고 출력하고 프로그램을 종료한다.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {

    string romeo, juliet;

    cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
    cout << "로미오: ";
    cin >> romeo;
    cout << "줄리엣: ";
    cin >> juliet;

    if (romeo == "가위") {
        if (juliet == "가위")
            cout << "비겼습니다." << endl;
        else if (juliet == "바위")
            cout << "줄리엣이 이겼습니다." << endl;
        else
            cout << "로미오가 이겼습니다." << endl;
    }
    else if (romeo == "바위") {
        if (juliet == "가위")
            cout << "로미오가 이겼습니다." << endl;
        else if (juliet == "바위")
            cout << "비겼습니다." << endl;
        else
            cout << "줄리엣이 이겼습니다." << endl;
    }
    else if (romeo == "보") {
        if (juliet == "가위")
            cout << "줄리엣이 이겼습니다." << endl;
        else if (juliet == "바위")
            cout << "로미오가 이겼습니다." << endl;
        else
            cout << "비겼습니다." << endl;
    }

    return 0;
}
