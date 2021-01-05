/*
Q11
다음은 커피 자판기로 동작하는 프로그램을 만들기 위해 필요한 두 클래스이다.
  (CoffeeVendingMachine, Container 클래스 생략...)

다음과 같이 실행되도록 main() 함수와 CoffeeVendingMachine, Container를 완성하라.
만일 커피, 물, 설탕 중 잔량이 하나라도 부족해 커피를 제공할 수 없는 경우 '원료가 부족
합니다.'를 출력하라.
  (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Container {   // 통 하나를 나타내는 클래스
private:
    int size;   // 현재 저장량, 최대 저장량은 10
public:
    Container() { size = 10; }
    void fill();    // 최대량(10)으로 채우기
    void consume(); // 1만큼 소모하기
    int getSize();  // 현재 크기 리턴
};

void Container::fill() { size = 10; }
void Container::consume() { size -= 1; }
int Container::getSize() { return size; }

class CoffeeVendingMachine {    // 커피 자판기를 표현하는 클래스
private:
    Container tong[3];  // tong[0]는 커피, tong[1]은 물, tong[2]는 설탕통을 나타냄
    bool checkEmpty();
    void selectEspresso();  // 에스프레소를 선택한 경우 (커피1, 물1 소모)
    void selectAmericano(); // 아메리카노를 선택한 경우 (커피1, 물2 소모)
    void selectSugarCoffee();   // 설탕커피를 선택한 경우 (커피1, 물2, 설탕1 소모)
    void fill();    // 3개의 통을 모두 10으로 채움
    void show();    // 현재 커피, 물, 설탕의 잔량 출력
public:
    void run();     // 커피 자판기 작동
};

bool CoffeeVendingMachine::checkEmpty() {
    if (tong[0].getSize() == 0 || tong[1].getSize() == 0 || tong[2].getSize() == 0)
        return false;
    else
        return true;
}

void CoffeeVendingMachine::selectEspresso() {
    if (checkEmpty()) {
        tong[0].consume();
        tong[1].consume();
        cout << "에스프레소 드세요" << endl;
    }
    else
        cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::selectAmericano() {
    if (checkEmpty()) {
        tong[0].consume();
        tong[1].consume(); tong[1].consume();
        cout << "아메리카노 드세요" << endl;
    }
    else
        cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::selectSugarCoffee() {
    if (checkEmpty()) {
        tong[0].consume();
        tong[1].consume(); tong[1].consume();
        tong[2].consume();
        cout << "설탕커피 드세요" << endl;
    }
    else
        cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::fill() {
    for (int i = 0; i < 3; i++)
        tong[i].fill();
}

void CoffeeVendingMachine::show() {
    cout << "커피 " << tong[0].getSize() << ", ";
    cout << "물 " << tong[1].getSize() << ", ";
    cout << "설탕 " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
    cout << "***** 커피 자판기를 작동합니다 *****" << endl;
    int choice;
    while (true) {
        cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)" << endl;
        cout << ">> ";
        cin >> choice;
        switch (choice) {
            case 1:
                selectEspresso();
                break;
            case 2:
                selectAmericano();
                break;
            case 3:
                selectSugarCoffee();
                break;
            case 4:
                show();
                break;
            case 5:
                fill();
                show();
                break;
            default:
                cout << "다시 주문하세요!!" << endl;
        }
    }
}

int main() {

    CoffeeVendingMachine coffee;
    coffee.run();

    return 0;
}
