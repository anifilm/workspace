/*
Q7
문제 5번을 참고하여 생성자를 이용하여 짝수 홀수를 선택할 수 있도록 SelectableRandom
클래스를 작성하고 짝수 10개, 홀수 10개를 랜덤하게 발생시키는 프로그램을 작성하라.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class SelectableRandom {
public:
    SelectableRandom();
    int next(int oe);
    int nextInRange(int s, int e, int oe);
};

SelectableRandom::SelectableRandom() {
    srand(time(NULL));
}

int SelectableRandom::next(int oe) {
    int n = rand();
    if (n % 2 == oe) return n;
    else return n - 1;
}

int SelectableRandom::nextInRange(int s, int e, int oe) {
    int n = s + rand() % (e - 1);
    if (n % 2 == oe) return n;
    else return n - 1;
}

int main() {

    SelectableRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next(0);  // 0에서 RAND_MAX(32767) 사이의 랜덤한 짝수 정수 (짝수는 0, 홀수는 1)
        cout << n << ' ';
    }
    cout << endl << endl;
    cout << "-- 2에서 " << "9까지의 랜덤 홀수 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 9, 1); // 2에서 9사이의 랜덤한 홀수 정수 (짝수는 0, 홀수는 1)
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}
