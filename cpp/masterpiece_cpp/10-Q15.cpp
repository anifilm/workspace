/*
Q15
vector를 이용하여 아래 Circle 클래스의 객체를 삽입하고 삭제하는 프로그램을 작성하라. 삭제
시에는 이름이 같은 모든 원을 삭제한다.
  (Circle 클래스, 실행 결과 생략...)

*/
#include <iostream>
#include <vector>

using namespace std;

class Circle {
private:
    string name;  // 이름
    int radius;   // 반지름
public:
    Circle(int radius, string name) {
        this->radius = radius; this->name = name;
    }
    double getArea() { return radius * radius * 3.14; }
    string getName() { return name; }
};

int main() {

    vector<Circle*> v;
    v.push_back(new Circle(1, "donut"));
    v.push_back(new Circle(2, "waffle"));
    v.push_back(new Circle(3, "pizza"));

    vector<Circle*>::iterator it;

    cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;

    int menu, radius;
    string name;

    while (true) {
        cout << "삽입(1), 삭제(2), 모두보기(3), 종료(4): ";
        cin >> menu;

        switch (menu) {
            case 1:
                cout << "생성하고자 하는 원의 반지름과 이름은: ";
                cin >> radius >> name;
                v.push_back(new Circle(radius, name));
                break;
            case 2:
                cout << "삭제하고자 하는 원의 이름은: ";
                cin >> name;
                it = v.begin();
                while (it != v.end()) {
                    Circle *p = *it;
                    if (p->getName() == name) {
                        it = v.erase(it);
                        delete p;
                    }
                    else
                        it++;
                }
                break;
            case 3:
                for (it = v.begin(); it != v.end(); it++) {
                    Circle *p = *it;
                    cout << p->getName() << '\t' << p->getArea() << endl;
                }
                break;
            case 4:
                cout << "\n프로그램을 종료합니다." << endl;
                return 0;
        }
    }
}
