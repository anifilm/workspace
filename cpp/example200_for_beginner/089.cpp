// 구조체를 함수 인자로 사용하기
#include <iostream>

using namespace std;

struct Princess {
    string name;
    string father;
    string birthday;
} jungso;

void Print1(Princess &who) {    // reference 로 호출
    cout << "jungso.name = " << who.name << endl;
    cout << "jungso.father = " << who.father << endl;
    cout << "jungso.birthday = " << who.birthday << endl;
}

void Print2(Princess *who) {    // address 로 호출
    cout << "jungso->name = " << who->name << endl;
    cout << "jungso->father = " << who->father << endl;
    cout << "jungso->birthday = " << who->birthday << endl;
}

int main() {

    jungso.name = "정소공주";
    jungso.father = "조선 태종";
    jungso.birthday = "1412년";

    Print1(jungso);
    cout << endl;
    Print2(&jungso);

    return 0;
}
