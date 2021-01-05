/*
Q11
다음은 프로그램과 실행 결과를 보여준다. pos 조작자를 작성하라.
  (프로그램, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

istream& pos(istream& ins) {
    cout << "위치는? ";
    return ins;
}

int main() {

    int x, y;
    cin >> pos >> x;
    cin >> pos >> y;
    cout << x << ", " << y << endl;

    return 0;
}
