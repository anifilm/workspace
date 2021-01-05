/*
Q12
커피 자판기 시뮬레이터를 C++로 작성해 보자. 실행 사례는 다음과 같다. 자판기는 보통 커피,
설탕 커피, 블랙 커피의 3종류만 판매한다. 단순화를 위해 실행 사례에는 총 3인분의 재료만
가지도록 하였다. 커피 메뉴에 따라 필요한 재료들이 하나씩 없어진다. 객체 지향 구조에 따라
필요한 클래스를 작성하여 프로그램을 완성하라.
  (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Container {   // 통 하나를 나타내는 클래스
private:
    int size;   // 현재 저장량, 최대 저장량은 8
public:
    Container() { size = 8; }
    void fill();    // 최대량(8)으로 채우기
    void consume(int n = 1); // 1만큼 소모하기
    int getSize();  // 현재 크기 리턴
    friend ostream& operator<<(ostream& stream, Container a);
};

ostream& operator<<(ostream& stream, Container a) {
    for (int i = 0; i < a.size; i++)
        stream << '*';
    stream << endl;
    return stream;
}

void Container::fill() { size = 8; }
void Container::consume(int n) { size -= n; }
int Container::getSize() { return size; }

class CoffeeVendingMachine {    // 커피 자판기를 표현하는 클래스
private:
    Container tong[5];  // tong[0]는 커피, tong[1]은 설탕, tong[2]는 크림, tong[3]는 물, tong[4]는 컵을 나타냄
    bool checkEmpty();
    void selectNormalCoffee();  // 보통 커피를 선택한 경우 (커피2, 설탕2, 크림2, 물2, 컵1 소모)
    void selectSugarCoffee();   // 설탕 커피를 선택한 경우 (커피2, 설탕2, 크림-, 물2, 컵1 소모)
    void selectBlackCoffee();   // 블랙 커피를 선택한 경우 (커피2, 설탕-, 크림-, 물2, 컵1 소모)
    void fill();    // 5개의 통을 모두 8으로 채움
    void show();    // 현재 커피, 설탕, 크림, 물, 컵의 잔량 출력
public:
    void run();     // 커피 자판기 작동
};

bool CoffeeVendingMachine::checkEmpty() {
    if (tong[0].getSize() == 0 || tong[1].getSize() == 0 || tong[2].getSize() == 0 || tong[3].getSize() == 0 || tong[4].getSize() == 0)
        return false;
    else
        return true;
}

void CoffeeVendingMachine::selectNormalCoffee() {
    if (checkEmpty()) {
        tong[0].consume(2);
        tong[1].consume(2);
        tong[2].consume(2);
        tong[3].consume(2);
        tong[4].consume();
        cout << "맛있는 보통 커피 나왔습니다." << endl;
    }
    else
        cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::selectSugarCoffee() {
    if (checkEmpty()) {
        tong[0].consume(2);
        tong[1].consume(2);
    //  tong[2].consume(2);  // 크림
        tong[3].consume(2);
        tong[4].consume();
        cout << "달콤한 설탕 커피 드세요~~" << endl;
    }
    else
        cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::selectBlackCoffee() {
    if (checkEmpty()) {
        tong[0].consume(2);
    //  tong[1].consume(2);  // 설탕
    //  tong[2].consume(2);  // 크림
        tong[3].consume(2);
        tong[4].consume();
        cout << "진한 블랙 커피 나왔습니다." << endl;
    }
    else
        cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::fill() {
    cout << "모든 통을 채웁니다." << endl;
    for (int i = 0; i < 5; i++)
        tong[i].fill();
}

void CoffeeVendingMachine::show() {
    cout << "Coffee " << tong[0];
    cout << "Sugar  " << tong[1];
    cout << "Cream  " << tong[2];
    cout << "Water  " << tong[3];
    cout << "Cup    " << tong[4];
    cout << endl;
}

void CoffeeVendingMachine::run() {
    cout << "***** 명품 커피 자판기를 작동합니다 *****" << endl;
    int choice;
    while (true) {
        cout << "보통커피(1), 설탕커피(2), 블랙커피(3), 채우기(4), 종료(5)" << endl;
        cout << ">> ";
        cin >> choice;
        switch (choice) {
            case 1:
                selectNormalCoffee();
                show();
                break;
            case 2:
                selectSugarCoffee();
                show();
                break;
            case 3:
                selectBlackCoffee();
                show();
                break;
            case 4:
                fill();
                show();
                break;
            case 5:
                cout << "\n자판기 가동을 중지합니다." << endl;
                exit(0);
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
