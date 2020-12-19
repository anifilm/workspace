/*
Q8
int 타입의 정수를 객체화한 Integer 클래스를 작성하라. Integer의 모든 멤버 함수를
자동 인라인으로 작성하라. Integer 클래스를 활용하는 코드는 다음과 같다.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>
#include <string>

using namespace std;

class Integer {
private:
    int num;
public:
    Integer(int n);
    Integer(string n);
    int get();
    void set(int n);
    int isEven();
};

Integer::Integer(int n) : num(n) {
}

Integer::Integer(string n) {
    num = stoi(n);
}

int Integer::get() {
    return num;
}

void Integer::set(int n) {
    num = n;
}

int Integer::isEven() {
    if (num % 2 == 0) return 1;
    else return 0;
}

int main() {

    Integer n(30);
    cout << n.get() << ' '; // 30 출력
    n.set(50);
    cout << n.get() << ' '; // 50 출력

    Integer m("300");
    cout << m.get() << ' '; // 300 출력
    cout << m.isEven();     // true (정수로 1) 출력

    cout << endl;
    return 0;
}
