/*
Q4
CoffeeMachine 클래스를 만들어보자. main() 함수와 실행 결과가 다음과 같도록 CoffeeMachine
클래스를 작성하라. 에스프레소 한잔에는 커피와 물이 각각 1씩 소비되고, 아메리카노의 경우
커피는 1, 물은 2가 소비되고, 설탕 커피는 커피 1, 물 2, 설탕 1이 소비된다. CoffeeMachine
클래스에는 어떤 멤버 변수와 어떤 멤버 함수가 필요한지 잘 판단하여 작성하라.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>
#include <iomanip>

using namespace std;

class CoffeeMachine {
private:
    int coffee;
    int water;
    int sugar;
public:
    CoffeeMachine(int coffee, int water, int sugar);
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void fill();
    void show();
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar)
    : coffee(coffee), water(water), sugar(sugar) {
}

void CoffeeMachine::drinkEspresso() {
    coffee -= 1;
    water -= 1;
}

void CoffeeMachine::drinkAmericano() {
    coffee -= 1;
    water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
    coffee -= 1;
    water -= 2;
    sugar -= 1;
}

void CoffeeMachine::fill() {
    coffee = 10;
    water = 10;
    sugar = 10;
}

void CoffeeMachine::show() {
    cout << "커피 머신 상태, ";
    cout.setf(ios::left);
    cout << "커피: " << setw(3) << coffee << " ";
    cout << "물: " << setw(3) << water << " ";
    cout << "설탕: " << setw(3) << sugar << endl;
}

int main() {

    CoffeeMachine java(5, 10, 3);   // 커피량: 5, 물량: 10, 설탕: 6으로 초기화
    java.drinkEspresso();   // 커피 1, 물 1 소비
    java.show();    // 현재 커피 머신의 상태 출력
    java.drinkAmericano();  // 커피 1, 물 2 소비
    java.show();    // 현재 커피 머신의 상태 출력
    java.drinkSugarCoffee();// 커피 1, 물 2, 설탕 1 소비
    java.show();    // 현재 커피 머신의 상태 출력
    java.fill();    // 커피 10, 물 10, 설탕 10으로 채우기
    java.show();    // 현재 커피 머신의 상태 출력

    return 0;
}
