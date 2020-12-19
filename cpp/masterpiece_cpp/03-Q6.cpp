/*
Q6
문제 5번을 참고하여 짝수 정수만 랜덤하게 발생시키는 EvenRandom 클래스를 작성하고
EvenRandom 클래스를 이용하여 10개의 짝수를 랜덤하게 출력하는 프로그램을 완성하라.
0도 짝수로 처리한다.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class EvenRandom {
public:
    EvenRandom();
    int next();
    int nextInRange(int s, int e);
};

EvenRandom::EvenRandom() {
    srand(time(NULL));
}

int EvenRandom::next() {
    int n = rand();
    if (n % 2 == 0) return n;
    else return n - 1;
}

int EvenRandom::nextInRange(int s, int e) {
    int n = s + rand() % (e - 1);
    if (n % 2 == 0) return n;
    else return n - 1;
}

int main() {

    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();   // 0에서 RAND_MAX(32767) 사이의 랜덤한 짝수 정수
        cout << n << ' ';
    }
    cout << endl << endl;
    cout << "-- 2에서 " << "10까지의 랜덤 짝수 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 10);    // 2에서 10사이의 랜덤한 짝수 정수
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}
