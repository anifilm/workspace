// 문자열 비교하기 (string.compare)
#include <iostream>

using namespace std;

int main() {

    string seven_war {"임진왜란"};
    string korea_war {"한국전쟁"};

    // compare() 함수를 사용한 문자열 비교
    if (seven_war.compare(korea_war) == 0)
        cout << "같은 문자열 입니다." << endl;
    else
        cout << "다른 문자열 입니다." << endl;

    // 문자열 직접 비교
    if (seven_war == korea_war)
        cout << "같은 문자열 입니다." << endl;
    else
        cout << "다른 문자열 입니다." << endl;

    return 0;
}
