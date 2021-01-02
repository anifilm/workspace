// 제네릭 스택의 제네릭 타입을 포인터나 클래스로 구체화하는 예
#include <iostream>
#include <string>

using namespace std;

template <class T>
class MyStack {
private:
    T data[100];  // T타입의 배열, 스택 크기는 100
    int top;      // top of stack
public:
    MyStack();
    void push(T element);  // T타입 요소 element를 data[] 배열에 삽입
    T pop();  // 스택 top에 있는 데이터를 data[] 배열에서 반환
};

template <class T>
MyStack<T>::MyStack() {  // 생성자
    top = -1;  // 스택이 비어 있음
}

template <class T>
void MyStack<T>::push(T element) {
    if (top == 99) {
        cout << "stack is full" << endl;
        return;
    }
    top++;
    data[top] = element;
}

template <class T>
T MyStack<T>::pop() {
    T retData;
    if (top == -1) {
        cout << "stack is empty" << endl;
        return 0;  // 오류 출력
    }
    retData = data[top--];
    return retData;
}

class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
    void show() { cout << '(' << x << ", " << y << ')' << endl; }
};

int main() {

    MyStack<int*> ipStack;  // int*만 저장하는 스택
    int* p = new int[3];
    for (int i = 0; i < 3; i++)
        p[i] = i * 10;  // 0, 10, 20으로 초기화
    ipStack.push(p);  // 포인터 푸시
    int* q = ipStack.pop();  // 포인터 팝
    for (int i = 0; i < 3; i++)
        cout << q[i] << ' ';  // 화면 출력. 0 10 20 출력
    cout << endl;
    delete[] p;

    MyStack<Point> pointStack;  // Point 객체만 저장하는 스택
    Point a(2, 3), b;
    pointStack.push(a);  // Point 객체 푸시. 복사되어 저장
    b = pointStack.pop();  // Point 객체 팝
    b.show();  // Point 객체 출력. (2, 3) 출력

    MyStack<Point*> pStack; // Point*만 저장하는 스택
    pStack.push(new Point(10, 20));  // 동적 생성 Point 객체 푸시. 포인터만 저장
    Point* pPoint = pStack.pop();  // Point 객체의 포인터 팝
    pPoint->show();  // Point 객체 출력. (10, 20) 출력

    MyStack<string> stringStack;  // 문자열만 저장하는 스택
    string s = "C++";
    stringStack.push(s);
    stringStack.push("Java");
    cout << stringStack.pop() << ' ';
    cout << stringStack.pop() << endl;  // Java C++ 출력

    return 0;
}
