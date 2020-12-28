/* 이론 문제
Q10
다음은 Person 클래스와 파생 클래스 Student를 작성한 사례이다.
  (1) 다음 코드의 실행 결과는 무엇인가? 실행 결과에 대해 어떤 문제가 있다고 생각되는가?
      Person* p 포인터를 통해 업 캐스팅하여 객체를 생성하였을 경우 생성자는 Studnet()
      -> Person() 순으로 호출하여 객체를 생성하지만 객체 반환시 소멸자는 ~Person()만
      실행하게 된다.
  (2) Person 클래스나 Student 클래스를 수정하여 문제점을 해결하라.
      각 클래스의 소멸자를 virtual 선언 (동적 바인딩)하여 해결 가능
*/
#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    int id;
public:
    Person(int id = 0) { this->id = id; }
    virtual ~Person() { cout << "id = " << id << endl; }
};

class Student : public Person {
private:
    char* name;
public:
    Student(int id, const char* name)
        : Person(id) {
            int len = strlen(name);
            this->name = new char[len + 1];
            strcpy(this->name, name);
    }
    virtual ~Student() {
        cout << "name = " << name << endl;
        delete[] name;
    }
};

int main() {

    Person* p = new Student(10, "손연재");
    delete p;

    return 0;
}
