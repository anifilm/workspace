// 갹채자형 상속 이해하기 (Inheritance)
#include <iostream>
#include <string>

using namespace std;

class Info {
public:
    string name;
    int year;

    Info() {}
};

class GoodKing : public Info {
private:
    string country;

public:
    GoodKing(const string country)
        : country(country) {
    }
    void Display() {
        cout << this->country << " " << this->name << " 즉위 연도: BC " << this->year << endl;
    }
};

class BadKing : public Info {
private:
    string country;

public:
    BadKing(const string country)
        : country(country) {
    }
    void Display() {
        cout << this->country << " " << this->name << " 즉위 연도: " << this->year << endl;
    }
};

int main() {

    GoodKing king1("고조선");
    king1.name = "단군왕검";
    king1.year = 2333;

    BadKing king2("고려");
    king2.name = "충혜왕";
    king2.year = 1330;

    king1.Display();
    king2.Display();

    return 0;
}
