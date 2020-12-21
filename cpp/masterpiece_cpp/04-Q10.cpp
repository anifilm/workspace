/*
Q10
다음에서 Person은 사람을, Family는 가족을 추상화한 클래스로서 완성되지 않은 클래스이다.
  (Person, Family 클래스 생략...)

다음 main()이 동작하도록 Person과 Family 클래스에 필요한 멤버들을 추가하고 코드를 완성
하라.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Person {
    string name;
public:
    Person() { this->name = ""; }
    Person(string name) { this->name = name; }
    string getName() { return name; }
    void setName(string name) { this->name = name; }
};

class Family {
    Person* p;  // Person 배열 포인터
    int size;   // Person 배열의 크기, 가족 구성원 수
    string fName;
public:
    Family(string name, int size);  // size 개수만큼 Person 배열 동적 생성
    ~Family();
    void show();    // 모든 가족 구성원 출력
    void setName(int idx, string name);
};

Family::Family(string name, int size) {
    p = new Person[size];
    this->size = size;
    this->fName = name;
}

Family::~Family() {
    delete[] p;
}

void Family::show() {
    cout << this->fName << "가족은 다음과 같이" << size << "명 입니다." << endl;
    for (int i = 0; i < size; i++)
        cout << p[i].getName() << '\t';
    cout << endl;
}

void Family::setName(int idx, string name) {
    p[idx].setName(name);
}

int main() {

    Family* simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpsom 가족
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;

    return 0;
}
