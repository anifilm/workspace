/*
Q5
랜덤 수를 발생시키는 Random 클래스를 만들자. Random 클래스를 이용하여 랜던한 정수를
10개 출력하는 사례는 다음과 같다. Random 클래스가 생성자, next(), nextInRange()의
3개의 멤버 함수를 가지도록 작성하고 main() 함수와 합쳐 하나의 cpp 파일에 구현하라.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
    Random();
    int next();
    int nextInRange(int s, int e);
};

Random::Random() {
    srand((unsigned)time(0));
}

int Random::next() {
    return rand();
}

int Random::nextInRange(int s, int e) {
    return s + rand() % (e - 1);
}

int main() {

    Random r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();   // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl << endl;
    cout << "-- 2에서 " << "4까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 4);    // 2에서 4사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}
