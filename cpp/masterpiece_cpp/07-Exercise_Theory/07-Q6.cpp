/* 이론 문제
Q6
다음 프로그램은 컴파일 오류가 발생한다. 오류의 원인은 무엇인가? 오류를 바람직하게
수정하라.
*/
#include <iostream>

using namespace std;

class Professor;

class Student {
    int id;
public:
    Student(int id) { this->id = id; }
    friend void show(Student s, Professor p);  // 외부 함수를 프렌드 선언
};

class Professor {
    string name;
public:
    Professor(string name) { this->name = name; }
    friend void show(Student s, Professor p);  // 외부 함수를 프렌드 선언
};

/* 외부 함수에서 Student와 Professor 클래스의 멤버 변수에 접근하였기 때문에 오류 발생
   프렌드 선언으로 오류 해결 가능 */
void show(Student s, Professor p) {
    cout << s.id << p.name << endl;
}
