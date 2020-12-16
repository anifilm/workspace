// Call by Value 이해하기
#include <iostream>

using namespace std;

void Func(int arg) {
    cout << "변경 전: " << arg << endl;
    arg += 10;
    cout << "변경 후: " << arg << endl;
}

int main() {

    int year = 10;

    Func(year);
    cout << "함수 종료 후: " << year << endl;

    return 0;
}

/*

call by value (값에 의한 호출)

함수 호출시 전달되는 "변수의 값을 복사"하여 함수의 인자로 전달
복사된 인자는 함수 안에서 지역적으로 사용되는 local value의 특성을 가진다.
따라서 함수 안에서 인자의 값이 변경되어도, 외부의 변수의 값은 변경되지 않는다.

*/
