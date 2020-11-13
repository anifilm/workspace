// 이전 예제에 대한 생성자의 활용
#include <iostream>

using namespace std;

class FruitSeller {
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    /*
    void InitMembers(int price, int num, int money) {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }
    */
    // 생성자 선언 (클래스의 이름 FruitSeller와 같다)
    FruitSeller(int price, int num, int money) {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
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
    void InitMembers(int money) {
        myMoney = money;
        numOfApples = 0;
    }
    */
    // 생성자 (클래스의 이름 FruitBuyer와 같다)
    FruitBuyer(int money) {
        myMoney = money;
        numOfApples = 0;
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

    /*
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);
    */
    FruitSeller seller {1000, 20, 0};   // 생성자를 통한 초기화
    /*
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    */
    FruitBuyer buyer {5000};            // 생성자을 통한 초기화
    buyer.BuyApples(seller, 2000);      // 과일의 구매

    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();
    cout << "\n과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();

    return 0;
}
