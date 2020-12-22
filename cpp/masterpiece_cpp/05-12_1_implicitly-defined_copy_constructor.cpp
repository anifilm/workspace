// 묵시적 복사 생성
#include <iostream>
#include <cstring>

using namespace std;

class Person {  // Person 클래스 선언
private:
    char* name;
    int id;
public:
    Person() { cout << "생성자 호출" << endl; }
    Person(int id, const char* name);   // 생성자
    Person(const Person& p);    // 컴파일러에 의해 자동 삽입된 복사 생성자
    ~Person();  // 소멸자
    void changeName(const char* name);
    void show() { cout << id << ", " << name << endl; }
};

Person::Person(int id, const char* name) {  // 생성자
    this->id = id;
    int len = strlen(name);         // name의 문자 개수
    this->name = new char[len+1];   // name 문자열 공간 할당
    strcpy(this->name, name);       // name에 문자열 복사
}

/*  컴파일러에 의해 자동 삽입된 복사 생성자 (얕은 복사) */
Person::Person(const Person& p) {
    this->id = p.id;
    this->name = p.name;
    cout << "디폴트 복사 생성자 호출" << endl;
}

Person::~Person() { // 소멸자
    if (name) {     // 만약 name에 동적 할당된 배열이 있다면
        cout << "소멸자 호출: " << name << endl;
        delete[] name;  // 동적 할당 메모리 반환
    }
}

void Person::changeName(const char* name) { // 이름 변경
    if (strlen(name) > strlen(this->name))
        return; // 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
    strcpy(this->name, name);
}

void f(Person p) {  // 매개 변수 p가 생성될 때 복사 생성자 호출
    cout << "디폴트 복사 생성자 호출로 매개 변수 p 생성" << endl;
}

Person g() {
    Person mother(2, "Jane");
    return mother;  // mother의 복사본을 생성하여 복사본을 반환
}                   // 사본이 만들어질 때 복사 생성자 호출

int main() {

    Person father(1, "Kitae");
//  Person daughter(father);    // 복사 생성자를 명시적으로 호출하는 사례

/*
복사 생성자를 정의해 놓지 않았다가 디폴트 복사 생성자가 생성되어 프로그램이 비정상 종료
되는 경우에 대비하여 가능하면 깊은 복사 생성자를 구현해 놓아야 할 필요가 있다.
묵시적 복사 생성의 경우는 다음 3가지로서, 컴파일러가 복사 생성자를 자동으로 호출하는
경우이다.
*/

/* 1. 객체로 초기화하여 객체가 생성될 때 */
    Person son = father;    // 복사 생성자 자동 호출

/* 컴파일러는 위의 코드를 다음과 같이 변환하여 복사 생성자를 호출하게 된다. */
    Person son(father);

    Person son;     // 위의 코드를 이 치환문과 혼돈하지 않도록 하자.
    son = father;   // 복사 생성자 호출되지 않음

/* 2. '값에 의한 호출'로 객체가 전달될 때 */
    f(father);      // '값에 의한 호출'로 father 객체 전달

/* 3. 함수가 객체를 반환할 때
  함수가 객체를 반환할 때, return 문은 반환 객체의 복사본을 생성하여 호출한 곳으로
  전달한다. 이때 복사 생성자가 호출된다. */
    g();

    return 0;
}
