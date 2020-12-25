/*
Q10
통계를 내는 Statistics 클래스를 만들려고 한다. 데이터는 Statistics 클래스 내부에
int 배열을 동적으로 할당받아 유지한다. 다음과 같이 연산이 잘 이루어지도록 Statistics
클래스와 !, <<, >>, ~ 연산자 함수를 작성하라.
  (연산 내용, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Statistics {
private:
    int* arr;
    int size;
public:
    Statistics() { arr = new int[10]; size = 0; }
    ~Statistics() { delete[] arr; }

    bool operator!();
    Statistics& operator<<(int n);
    Statistics& operator>>(int& a);
    void operator~();
};

bool Statistics::operator!() {
    if (size == 0) return true;
    else return false;
}

Statistics& Statistics::operator<<(int n) {
    arr[size] = n;
    size++;
    return *this;
}

Statistics& Statistics::operator>>(int& a) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    a = sum / size;
    return *this;
}

void Statistics::operator~() {
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main() {

    Statistics stat;
    if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

    int x[5];
    cout << "5개의 정수를 입력하라: ";
    for (int i = 0; i < 5; i++) cin >> x[i];  // x[i]에 정수 입력

    for (int i = 0; i < 5; i++) stat << x[i];  // x[i] 값을 통계 객체에 삽입한다.
    stat << 100 << 200;  // 100, 200을 통계 객체에 삽입한다.
    ~stat;  // 통계 데이터를 모두 출력한다.

    int avg;
    stat >> avg;  // 통계 객체로부터 평균을 받는다.
    cout << "avg = " << avg << endl;  // 평균을 출력한다.

    return 0;
}
