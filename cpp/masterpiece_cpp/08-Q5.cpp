/*
Q5
BaseArray 클래스를 상속받아 큐처럼 동작하는 MyQueue 클래스를 작성하라.
MyQueue를 활용하는 사례는 다음과 같다.
  (MyQueue 활용 코드, 실행 결과 생략...)

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

class MyQueue : public BaseArray {
private:
    int front;
    int rear;
public:
    MyQueue(int capacity)
        : BaseArray(capacity) {
            this->front = this->rear = 0;
    }
    void enqueue(int n) {
        put(rear, n);
        rear++;
    }
    int dequeue() {
        int tmp = get(front);
        front++;
        return tmp;
    }
    int capacity() { return getCapacity(); }
    int length() { return rear - front; }
};

int main() {

    MyQueue mQ(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라: ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mQ.enqueue(n);  // 큐에 삽입
    }
    cout << "큐의 용량: " << mQ.capacity() << ", 큐의 크기: " << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다: ";
    while (mQ.length() != 0) {
        cout << mQ.dequeue() << ' ';  // 큐에서 제거하여 출력
    }
    cout << endl;
    cout << "큐의 현재 크기: " << mQ.length() << endl;

    return 0;
}
