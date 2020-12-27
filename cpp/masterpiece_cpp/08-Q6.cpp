/*
Q6
BaseArray 클래스를 상속받아 스택으로 동작하는 MyStack 클래스를 작성하라.
MyStack을 활용하는 사례는 다음과 같다.
  (MyStack 활용 코드, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class BaseArray {
private:
    int capacity;  // 배열의 크기
    int* mem;  // 정수 배열을 만들기 위한 메모리의 포인터
protected:
    BaseArray(int capacity = 100) {
        this->capacity = capacity; mem = new int[capacity];
    }
    ~BaseArray() { delete[] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

class MyStack : public BaseArray {
private:
    int top;
public:
    MyStack(int capacity)
        : BaseArray(capacity) {
            this->top = 0;
    }
    void push(int n) {
        top++;
        put(top, n);
    }
    int pop() {
        int tmp = get(top);
        top--;
        return tmp;
    }
    int capacity() { return getCapacity(); }
    int length() { return top; }
};

int main() {

    MyStack mStack(100);
    int n;
    cout << "스택에 삽입할 5개의 정수를 입력하라: ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mStack.push(n);  // 스택에 푸시
    }
    cout << "스택의 용량: " << mStack.capacity() << ", 스택의 크기: " << mStack.length() << endl;
    cout << "스택의 원소를 팝하여 출력한다: ";
    while (mStack.length() != 0) {
        cout << mStack.pop() << ' ';  // 스택에서 팝하여 출력
    }
    cout << endl;
    cout << "스택의 현재 크기: " << mStack.length() << endl;

    return 0;
}
