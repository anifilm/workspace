/*
Q7
다음과 같이 선언된 정수를 저장하는 스택 클래스 MyIntStack을 구현하라. MyIntStack
스택에 저장할 수 있는 정수의 최대 개수는 10이다.
  (MyIntStack 클래스 생략...)

MyIntStack 클래스를 활용하는 코드와 실행 결과는 다음과 같다.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class MyIntStack {
private:
    int p[10];  // 최대 10개의 정수 저장
    int tos;    // 스택의 탑을 가리키는 인덱스
public:
    MyIntStack();
    bool push(int n);   // 정수 n을 스택에 푸시. 스택이 가득 차 있으면 false, 아니면 true 반환
    bool pop(int& n);   // 스택의 탑에 있는 값을 팝하여 n에 저장. 스택이 비어 있으면 false, 아니면 true 반환
};

MyIntStack::MyIntStack() {
    tos = 0;
}

bool MyIntStack::push(int n) {
    if (tos == 10) return false;
    p[tos] = n;
    tos++;
    return true;
}

bool MyIntStack::pop(int& n) {
    if (tos == 0) return false;
    tos--;
    n = p[tos];
    return true;
}

int main() {
    MyIntStack a;
    for (int i = 0; i < 11; i++) {  // 11개를 푸시하면, 마지막에는 stack full이 된다.
        if (a.push(i)) cout << i << ' ';    // 푸시된 값 에코
        else cout << endl << i+1 << "번째 stack full" << endl;
    }
    int n;
    for (int i = 0; i < 11; i++) {  // 11개를 팝하면, 마지막에는 stack empty가 된다.
        if (a.pop(n)) cout << n << ' ';    // 팝 한 값 출력
        else cout << endl << i+1 << "번째 stack empty";
    }
    cout << endl;
    return 0;
}
