/* 문제 04-1 [정보은닉과 const]
Chapter 03에서 제시한 과일장수 시뮬레이션 예제 FruitSaleSim1.cpp에서 정의한 두 클래스
의 멤벼변수는 private으로 선언이 되어있다. 그러나 다음 조건을 유지할 수 있는 장치는 아무
것도 되어있지 않다.
 - 사과의 구매를 목적으로 0보다 작은 수를 전달할 수 없다.

위의 제약사항을 항상 만족시킬 수 있도록 예제를 변경하고, 예제의 안전성을 높일 수 있도록
일부 함수를 const로 선언해보자.
*/
#include <iostream>

using namespace std;

class FruitSeller {
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    void InitMembers(int price, int num, int money);
    int SaleApples(int money);
    void ShowSalesResult() const;
};

void FruitSeller::InitMembers(int price, int num, int money) {
    APPLE_PRICE = price;
    numOfApples = num;
    myMoney = money;
}

int FruitSeller::SaleApples(int money) {
    if (money <= 0) {
        cout << "사과 구매를 위한 지급 금액이 0보다 작습니다." << endl;
        return 0;
    }
    int num = money / APPLE_PRICE;
    numOfApples -= num;
    myMoney += money;
    return num;
}

void FruitSeller::ShowSalesResult() const {
    cout << "남은 사과: " << numOfApples << endl;
    cout << "판매 수익: " << myMoney << endl;
}

class FruitBuyer {
    int myMoney;        // private:
    int numOfApples;    // private:
public:
    void InitMembers(int money);
    bool BuyApples(FruitSeller& seller, int money);
    void ShowBuyResult() const;
};

void FruitBuyer::InitMembers(int money) {
    myMoney = money;
    numOfApples = 0;
}

bool FruitBuyer::BuyApples(FruitSeller& seller, int money) {
    if (money <= 0) {
        cout << "사과 구매를 위한 지급 금액이 0보다 작습니다." << endl;
        return false;
    }
    cout << "아저씨 사과 " << money << "원 어치 주세요." << endl;
    numOfApples += seller.SaleApples(money);
    myMoney -= money;
    cout << "사과 장수로 부터 사과를 " << numOfApples << "개 받았습니다." << endl;
    return true;
}

void FruitBuyer::ShowBuyResult() const {
    cout << "현재 잔액: " << myMoney << endl;
    cout << "사과 개수: " << numOfApples << endl;
}

int main() {

    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);

    FruitBuyer buyer;
    buyer.InitMembers(5000);

    if (!buyer.BuyApples(seller, 0))
        cout << "사과 구매 실패, 사과 장수가 돈을 요구합니다.\n" << endl;
    else
        cout << "사과 구매 완료\n" << endl;
    if (!buyer.BuyApples(seller, 2000))     // 과일의 구매
        cout << "사과 구매 실패, 사과 장수가 돈을 요구합니다.\n" << endl;
    else
        cout << "사과 구매 완료\n" << endl;

    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();
    cout << "\n과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();

    return 0;
}
