/*
1 다음은 제네릭 클래스 TestClass를 만든 예로서 몇 가지 오류를 가지고 있다.
  (2) 제네릭 타입 T를 int타입으로 구체화시키는 TestClass객체 tmp를 선언하라.
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

int main() {

    TestClass<int> tmp;
    tmp.set(3);
    cout << tmp.get() << endl;

    return 0;
}
