// 헤더 파일과 cpp 파일로 분리하기
#include <iostream>
#include "Calulator.h"
#include "Adder.h"

using namespace std;

void Calulator::run() {
    int a, b;
    cout << "두 개의 수를 입력하세요: ";
    cin >> a >> b;      // 정수 두 개 입력
    Adder adder(a, b);       // 덧셈기 생성
    cout << adder.process(); // 덧셈 계산
}
