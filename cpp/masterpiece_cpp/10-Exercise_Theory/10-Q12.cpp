/* 이론 문제
Q12
템플릿 클래스 Container를 작성하고자 한다.

template <class T> class Container {
private:
    __________  // T 타입의 포인터 p를 선언하라.
    __________  // 배열의 크기를 나타내는 변수 size를 선언하라.
public:
    Container(int n);  // 멤버 변수 p에 n개의 동적 배열을 할당받는 생성자
    ~Container();
    void set(int index, T value) { p[index] = value; }  // index 위치에 value 저장
    T get(int index);  // index 위치의 값 반환
};

*/
#include <iostream>

using namespace std;

template <class T> class Container {
private:
// (1) 빈칸을 적절하게 채워라.
    T* p;      // T 타입의 포인터 p를 선언하라.
    int size;  // 배열의 크기를 나타내는 변수 size를 선언하라.
public:
    Container(int n);  // 멤버 변수 p에 n개의 동적 배열을 할당받는 생성자
    ~Container();
    void set(int index, T value) { p[index] = value; }  // index 위치에 value 저장
    T get(int index);  // index 위치의 값 반환
};

// (2) 생성자를 작성하라.
template <class T>
Container<T>::Container(int n) {
    size = n;
    p = new T[n];
}

// (3) 소멸자를 작성하라.
template <class T>
Container<T>::~Container() {
    delete[] p;
}

// (4) get()을 작성하라.
template <class T>
T Container<T>::get(int index) {
    return p[index];
}

int main() {
// (5) char 타입의 문자만 저장 가능한 Container 객체 c를 생성하는 선언문을 작성하라. (c의 크기는 26)
    Container<char> c(26);

// (6) 생성한 객체 c에 set() 함수를 이용하여 알파벳 'a'~'z'를 삽입하고, get() 함수를 이용하여 반대순으로 화면에 출력하는 main() 함수를 작성하라.
    for (int i = 0; i < 26; i++)
        c.set(i, i+'a');

    for (int i = 25; i >= 0; i--)
        cout << c.get(i) << ' ';
    cout << endl;

    return 0;
}
