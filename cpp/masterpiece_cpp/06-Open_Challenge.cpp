/*
Open Challenge - Up & Down 게임 만들기
Up & Down 게임 프로그램을 작성해 보자. 게임에 참석하는 사람은 2명이며, 번갈아 가며
다음과 같이 숨겨진 답에 접근해 간다. Up & Down 게임은 전체적으로 UpAndDownGame 클래스
로 작성하고 static 멤버로만 구성하라. 선수를 표현하기 위해 Person 클래스를 작성하고
main() 함수는 프로그램을 시작시키는 기능 정도로만 구현하라.
    (실행 결과 생략...)

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand((unsigned)time(0));   // 항상 다른 랜덤수를 발생시키기 위한 seed 설정
    int n = rand(); // 0에서 RAND_MAX(32767)사이의 랜덤한 정수가 n에 발생
    n = n % 100;    // n은 0에서 99사이의 정수

    return 0;
}
