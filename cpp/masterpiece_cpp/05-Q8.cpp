/*
Q8
문제 7번의 MyIntStack을 수정하여 다음과 같이 선언하였다. 스택에 저장할 수 있는 정수의
최대 개수는 생성자에서 주어지고 size 멤버에 유지한다. MyIntStack 클래스를 작성하라.
  (MyIntStack 클래스 생략...)

MyIntStack 클래스를 활용하는 코드와 실행 결과는 다음과 같다.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class MyIntStack {
private:
    int* p;     // 스택 메모리로 사용할 포인터
    int size;   // 스택의 최대 크기
    int tos;    // 스택의 탑를 가리키는 인덱스
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s);    // 복사 생성자
    ~MyIntStack();
    bool push(int n);   // 정수 n을 스택에 푸시. 스택이 가득 차 있으면 false, 아니면 true 반환
    bool pop(int& n);   // 스택의 탑에 있는 값을 팝하여 n에 저장. 스택이 비어 있으면 false, 아니면 true 반환
};

MyIntStack::MyIntStack() {
    tos = 0;
    size = 1;
    p = new int[size];
}

MyIntStack::MyIntStack(int size) {
    tos = 0;
    this->size = size;
    p = new int[size];
}

MyIntStack::MyIntStack(const MyIntStack& s) {
    this->tos = s.tos;
    this->size = s.size;
    this->p = new int[s.size];
    for (int i = 0; i < s.tos; i++)
        this->p[i] = s.p[i];
}

MyIntStack::~MyIntStack() {
    if (p) delete p;
}

bool MyIntStack::push(int n) {
    if (tos == size) return false;
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
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;   // 복사 생성
    b.push(30);

    int n;
    a.pop(n);   // 스택 a 팝
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);   // 스택 b 팝
    cout << "스택 b에서 팝한 값 " << n << endl;
    return 0;
}
