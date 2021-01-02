// 제네릭 스택 클래스 만들기
#include <iostream>

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

int main() {

    MyStack<int> iStack;  // int만 저장할 수 있는 스택
    iStack.push(3);
    cout << iStack.pop() << endl;

    MyStack<double> dStack;  // double만 저장할 수 있는 스택
    dStack.push(3.5);
    cout << dStack.pop() << endl;

    MyStack<char>* p = new MyStack<char>();  // char만 저장할 수 있는 스택
    p->push('a');
    cout << p->pop() << endl;

    delete p;

    return 0;
}
