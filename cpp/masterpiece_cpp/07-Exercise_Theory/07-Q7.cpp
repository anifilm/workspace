/* 이론 문제
Q7
다음 프로그램은 컴파일 오류를 가지고 있다. 오류를 지적하고 바람직하게 수정하라.
*/
#include <iostream>

using namespace std;

/*
class Food {
    int price;
    string name;
public:
    Food(string name, int price);
    void buy();
}; */
class Food;

class Person {
    int id;
public:
    /*
    void shopping(Food food) {
        if (food.price < 1000)  // Person 클래스 멤버 함수에서 Food 클래스의 priavte 멤버 변수에
            food.buy();         // 직접 접근하여 오류 발생, 프렌드 선언으로 오류 해결 가능
    } */
    void shopping(Food food);
    int get() { return id; }
};

class Food {
    int price;
    string name;
public:
    Food(string name, int price);
    void buy();
    friend void Person::shopping(Food food);  // Person 클래스의 멤버 함수를 프렌드 선언
};

// 클래스 멤버 함수의 전방 참조로 인한 오류를 해결하기 위해 Food 클래스의 위치를 변경
// shopping() 함수의 선언과 구현을 분리
void Person::shopping(Food food) {
    if (food.price < 100)
        food.buy();
}
