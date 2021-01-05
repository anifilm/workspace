/*
Q5
랜덤 수를 발생시키는 Random 클래스를 만들자. Random 클래스를 이용하여 랜던한 정수를
10개 출력하는 사례는 다음과 같다. Random 클래스가 생성자, next(), nextInRange()의
3개의 멤버 함수를 가지도록 작성하고 main() 함수와 합쳐 하나의 cpp 파일에 구현하라.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

class Random {
    mt19937 mersenne;
public:
    Random();
    int next();
};

Random::Random() {}

int Random::next() {
    random_device rd;
    mt19937 mersenne(rd());
    uniform_int_distribution<> die(1, 45);
    return die(mersenne);
}

int main() {

    Random r;
    cout << "-- 1에서 " << "45까지의 랜덤 정수 6개 --" << endl;
    cout << endl << setw(8) << "[ ";
    int lot[6];
    // 난수 저장
    for (int i = 0; i < 6; i++) {
        lot[i] = r.next();
    }
    // 중복 체크 후 수정
    for (int i = 0; i < 6; i++) {
        for (int j = i+1; j < 6; j++) {
            if (lot[i] == lot[j])
                lot[j] = r.next();
        }
    }
    // 난수 출력
    for (int i = 0; i < 6; i++)
        cout << lot[i] << ' ';
    cout << "] " << endl;

    return 0;
}
