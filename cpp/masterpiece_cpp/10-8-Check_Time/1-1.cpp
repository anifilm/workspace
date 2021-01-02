/*
1 다음은 제네릭 클래스 TestClass를 만든 예로서 몇 가지 오류를 가지고 있다.
  (1) TestClass를 올바르게 고쳐라.
*/
#include <iostream>

using namespace std;

template <class T>
class TestClass {
private:
    int x;
public:
    void set(T a);
    T get();
};

template <class T>
void TestClass<T>::set(T a) { x = a; }

template <class T>
T TestClass<T>::get() { return x; }
