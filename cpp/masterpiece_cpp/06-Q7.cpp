/*
Q7
다음과 같은 static 멤버를 가진 Random 클래스를 완성하라. (Open Challenge 힌트 참고)
그리고 Random 클래스를 이용하여 다음과 같이 랜덤한 값을 출력하는 main() 함수도 작성
하라. main()에서 Random 클래스의 seed() 함수를 활용하라.
  (Random 클래스, 실행 결과 생략...)

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
    // 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
    static void seed() { srand((unsigned)time(0)); }    // 씨드 설정
    static int nextInt(int min = 0, int max = 32767);   // min과 max사이의 랜덤 정수 반환
    static char nextAlphabet(); // 랜덤 알파벳 문자 반환
    static double nextDouble(); // 0보다 크거나 같고 1보다 작은 랜덤 실수 반환
};

int Random::nextInt(int min, int max) {
    return min + rand() % max;
}

char Random::nextAlphabet() {
    if (rand() % 2 == 0) // 대문자
        return 65 + rand() % 26;
    else                 // 소문자
        return 97 + rand() % 26;
}

double Random::nextDouble() {
    return rand() / double(RAND_MAX * 1);
}

int main() {

    Random::seed();

    cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;
    for (int i = 0; i < 10; i++)
        cout << Random::nextInt(1, 100) << ' ';
    cout << endl;

    cout << "알파벳을 랜덤하게 10개를 출력합니다." << endl;
    for (int i = 0; i < 10; i++)
        cout << Random::nextAlphabet() << ' ';
    cout << endl;

    cout << "랜덤한 실수를 10개 출력합니다." << endl;
    for (int i = 0; i < 10; i++)
        cout << Random::nextDouble() << ' ';
    cout << endl;

    return 0;
}
