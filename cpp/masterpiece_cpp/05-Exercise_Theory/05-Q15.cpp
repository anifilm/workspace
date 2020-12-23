/* 이론 문제
Q15
다음 클래스에 대해 물음에 답하여라.
  (1) 적절한 소멸자를 작성하라.
  (2) 컴파일러가 삽입하는 디폴트 복사 생성자 코드는 무엇인가?
  (3) MyClass에 깊은 복사를 실행하는 복사 생성자 코드를 작성하라.
*/
#include <iostream>

using namespace std;

class MyClass {
private:
    int size;
    int* element;
public:
    MyClass(int size);
    MyClass(const MyClass& c);
    ~MyClass();
};

MyClass::MyClass(int size) {
    this->size = size;
    element = new int[size];
    for (int i = 0; i < size; i++)
        element[i] = 0;
}
//  (2) 컴파일러가 삽입하는 디폴트 복사 생성자 코드는 무엇인가?
MyClass::MyClass(const MyClass& c) {
    this->size = c.size;
    this->element = c.element;
}
//  (3) MyClass에 깊은 복사를 실행하는 복사 생성자 코드를 작성하라.
MyClass::MyClass(const MyClass& c) {
    this->size = c.size;
    this->element = new int[size];
    for (int i = 0; i < size; i++)
        this->element[i] = c.element[i];
}
//  (1) 적절한 소멸자를 작성하라.
MyClass::~MyClass() {
    delete[] element;
}
