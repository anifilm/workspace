/*
Q9
다음과 같은 Person 클래스가 있다. Person 클래스와 main() 함수를 작성하여. 3개의 Person
객체를 가지는 배열을 선언하고, 다음과 같이 키보드에서 이름과 전화번호를 입력받아 출력하고
검색하는 프로그램을 완성하라.
  (Person 클래스, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Person {
private:
    string name;
    string phone;
public:
    Person();
    string getName() { return name; }
    string getPhone() { return phone; }
    void set(string name, string phone);
};

Person::Person() {
    name = "noname"; phone = "000-0000-0000";
}

void Person::set(string name, string phone) {
    this->name = name;
    this->phone = phone;
}

int main() {

    Person person[3];
    string name, phone;

    cout << "이름과 휴대전화 번호를 입력해 주세요." << endl;

    for (int i = 0; i < 3; i++) {
        cout << "사람 " << i+1 << ": ";
        cin >> name >> phone;
        person[i].set(name, phone);
    }

    cout << "모든 사람의 이름은 ";
    for (int i = 0; i < 3; i++)
        cout << person[i].getName() << ' ';
    cout << endl;

    cout << "전화번호를 검색합니다. 이름을 입력하세요: ";
    cin >> name;
    for (int i = 0; i < 3; i++) {
        if (person[i].getName() == name)
            cout << "휴대전화 번호는 " << person[i].getPhone() << endl;
    }

    return 0;
}
