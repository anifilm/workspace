// Call by Reference 이해하기
#include <iostream>

using namespace std;

void Func1(int &arg) {
    cout << "변경 전: " << arg << endl;
    arg += 10;
    cout << "변경 후: " << arg << endl;
}

void Func2(string &info) {
    info += "981년";
}

int main() {

    int year {10};
    string king_info {"고려 성종 즉위년도: "};

    Func1(year);
    cout << "Func1 함수 종료 후: " << year << endl;

    Func2(king_info);
    cout << king_info << endl;

    return 0;
}

/*

call by reference (참조에 의한 호출)

함수 호출시 인자로 전달되는 변수의 주소값을 참조로 전달한다.
따라서 함수 안에서 인자의 값이 변경되면, 전달된 원본 값이 변경된다.

여기서 변수 year를 함수에 전달하면 &arg로 year의 주소값을 전달 받고
변수 arg를 통해 직접 값을 변경할 수 있다.

int &arg = year; (같은 의미)

*/
