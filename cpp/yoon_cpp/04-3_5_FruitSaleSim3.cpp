// 멤버 이니셜라이저 (Member Initializer)를 이용한 변수 및 const 상수(변수) 초기화
#include <iostream>

using namespace std;

class FruitSeller {
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    /*
    FruitSeller(int price, int num, int money) {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }
    */
    FruitSeller(int price, int num, int money)
        : APPLE_PRICE {price}, numOfApples {num}, myMoney {money} {
    }

    int SaleApples(int money) {
        int num = money / APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }

    void ShowSalesResult() {
        cout << "남은 사과: " << numOfApples << endl;
        cout << "판매 수익: " << myMoney << endl;
    }
};

class FruitBuyer {
    int myMoney;        // private:
    int numOfApples;    // private:

public:
    /*
    FruitBuyer(int money) {
        myMoney = money;
        numOfApples = 0;
    }
    */
    FruitBuyer(int money)
        : myMoney {money}, numOfApples {} {
    }

    void BuyApples(FruitSeller& seller, int money) {
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }

    void ShowBuyResult() {
        cout << "현재 잔액: " << myMoney << endl;
        cout << "사과 개수: " << numOfApples << endl;
    }
};

int main() {

    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);      // 과일의 구매

    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();
    cout << "\n과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();

    return 0;
}
