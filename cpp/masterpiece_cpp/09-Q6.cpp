/*
Q6
다음 AbstractStack은 정수 스택 클래스로서 추상 클래스이다.
  (AbstractStack 클래스 생략...)

*/
#include <iostream>

using namespace std;

class AbstractStack {
public:
    virtual bool push(int n) = 0;  // 스택에 n을 푸시한다. 스택이 full이면 false 반환
    virtual bool pop(int& n) = 0;  // 스택에서 팝한 정수를 n에 저장하고 스택이 empty이면 false 반환
    virtual int size() = 0;  // 현재 스택에 저장된 정수의 개수를 반환
};

class IntStack : public AbstractStack {
private:
    int* p;
    int s_size;
    int top;
public:
    IntStack(int size) {
        s_size = size;
        p = new int[size];
        top = -1;
    }
    ~IntStack() {
        delete[] p;
    }
    virtual bool push(int n) {
        if (top != s_size - 1) {
            top++;
            p[top] = n;
            return true;
        }
        return false;
    }
    virtual bool pop(int& n) {
        if (top > -1) {
            n = p[top];
            top--;
            return true;
        }
        return false;
    }
    virtual int size() { return top + 1; }
};

int main() {

    int n;
    IntStack intStack(10);

    for (int i = 1; i <= 11; i++) {
        if (!intStack.push(i))
            cout << "스택이 가득 찼습니다." << endl;
    }
    cout << "현재 스택의 크기는 " << intStack.size() << "입니다." << endl;

    for (int i = 0; i < 11; i++) {
        if (intStack.pop(n))
            cout << n << endl;
        else
            cout << "스택이 비었습니다." << endl;
    }
    cout << "현재 스택의 크기는 " << intStack.size() << "입니다." << endl;

    return 0;
}
