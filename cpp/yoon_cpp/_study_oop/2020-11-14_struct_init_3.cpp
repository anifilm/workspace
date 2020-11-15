#include <iostream>

using namespace std;

struct Person {
    // 구조체 안에 enum 상수를 선언
    enum {
        NAME_LEN = 20,
        ADDRESS_LEN = 100
    };

    char name[NAME_LEN];
    int age;
    char address[ADDRESS_LEN];

    // 함수를 구조체 안에 포함시키기
    void AddAge() { age++; }
    void ShowPersonInfo() {
        printf("이름: %s\n", name);
        printf("나이: %d\n", age);
        printf("주소: %s\n", address);
        cout << endl;
    }
};

int main() {

    struct Person p1 {"홍길동", 30, "서울시 용산구 한남동"};
    p1.AddAge();
    p1.ShowPersonInfo();

    struct Person p2 {"고길동", 40, "서울시 서초구 반포동"};
    p2.ShowPersonInfo();

    return 0;
}
