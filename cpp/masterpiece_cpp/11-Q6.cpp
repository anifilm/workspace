/*
Q6
다음과 같이 정수, 제곱, 제곱근의 값을 형식에 맞추어 출력하는 프로그램을 작성하라. 필드
의 간격은 총 15칸이고 제곱근의 유효 숫자는 총 3자리로 한다. 빈칸은 모두 underline(_)
문자로 삽입한다.
  (실행 결과 생략...)

*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    cout << left;
    cout << setw(15) << "Number";
    cout << setw(15) << "Square";
    cout << setw(15) << "Square Root" << endl;

    for (int i = 0; i < 50; i += 5) {
        cout << setfill('_');
        cout << setw(15) << i;
        cout << setw(15) << i * i;
        cout << setw(15) << setprecision(3) << sqrt(i) << endl;
    }

    return 0;
}
