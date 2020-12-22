// 묵시적 복사 생성에 의해 복사 생성자가 자동 호출되는 경우
#include <iostream>
#include <cstring>

using namespace std;

class Person {  // Person 클래스 선언
private:
    char* name;
    int id;
public:
    Person(int id, const char* name);   // 생성자
    Person(const Person& p);    // 사용자 정의 복사 생성자
    ~Person();  // 소멸자
    void changeName(const char* name);
    void show() { cout << id << ", " << name << endl; }
};

Person::Person(int id, const char* name) {  // 생성자
    this->id = id;
    int len = strlen(name);     // name의 문자 개수
    this->name = new char[len+1];   // name 문자열 공간 할당
    strcpy(this->name, name);       // name에 문자열 복사
}

// 사용자 정의 복사 생성자 (깊은 복사)
Person::Person(const Person& p) {
    this->id = p.id;
    int len = strlen(p.name);       // name의 문자 개수
    this->name = new char[len+1];   // name을 위한 문자열 공간 할당
    strcpy(this->name, p.name);     // name에 문자열 복사
    cout << "복사 생성자 실행, 원본 객체의 이름 " << this->name << endl;
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

void f(Person p) {  // (2) '값에 의한 호출'로 매개 변수 p가 생성될 때 복사 생성자 호출
    p.changeName("dummy");
    cout << "디폴트 복사 생성자 호출로 매개 변수 p 생성" << endl;
}

Person g() {
    Person mother(2, "Jane");
    return mother;  // (3) 함수에서 객체를 반환할 때, mother 객체의 복사본을 생성하여 복사본을 반환
}                   //     사본이 만들어질 때 복사 생성자 호출

int main() {

    Person father(1, "Kitae");
    Person son = father;    // (1) 객체로 초기화하여 객체가 생성될 때, son 객체의 복사 생성자 호출
    f(father);  // 복사 생성자 호출
    g();        // 복사 생성자 호출

    return 0;
}
