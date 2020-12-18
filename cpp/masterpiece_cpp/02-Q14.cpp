/*
Q14
커피를 주문하는 간단한 C++ 프로그램을 작성해보자. 커피 종류는 "에스프레소", "아메리카노",
,"라떼", "카푸치노"의 4가지이며 가격은 각각 2000원, 2500원, 3000원, 3500원이다. 하루에
30000원 이상 벌게 되면 카페를 닫는다. 실행 결과와 같이 동작하는 프로그램을 작성하라.
  (실행의 예 생략...)

*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    const int ESPRESSO = 2000;
    const int AMERICANO = 2500;
    const int LATTE = 3000;
    const int CAPPUCCINO = 3500;
    const int FINAL_TOTAL = 30000;

    const char* M_ESPRESSO = "에스프레소";
    const char* M_AMERICANO = "아메리카노";
    const char* M_LATTE = "라떼";
    const char* M_CAPPUCCINO = "카푸치노";

    char choice[20];
    int person_num, total_sell = 0;

    while (true) {
        cout << "   [ 메 뉴 ]   " << endl;
        cout << M_ESPRESSO << " " << ESPRESSO << "원" << endl;
        cout << M_AMERICANO << " " << AMERICANO << "원" << endl;
        cout << M_LATTE << "\t   " << LATTE << "원" << endl;
        cout << M_CAPPUCCINO << "   " << CAPPUCCINO << "원" << endl;
        cout << "주문: ";
        cin >> choice >> person_num;

        if (strcmp(choice, M_ESPRESSO) == 0) {
            cout << ESPRESSO * person_num << "원 입니다. 맛있게 드세요." << endl;
            total_sell += ESPRESSO * person_num;
        }
        else if (strcmp(choice, M_AMERICANO) == 0) {
            cout << AMERICANO * person_num << "원 입니다. 맛있게 드세요." << endl;
            total_sell += AMERICANO * person_num;
        }
        else if (strcmp(choice, M_LATTE) == 0) {
            cout << LATTE * person_num << "원 입니다. 맛있게 드세요." << endl;
            total_sell += LATTE * person_num;
        }
        else if (strcmp(choice, M_CAPPUCCINO) == 0) {
            cout << CAPPUCCINO * person_num << "원 입니다. 맛있게 드세요." << endl;
            total_sell += CAPPUCCINO * person_num;
        }
        else
            cout << "다시 주문하세요!!" << endl;

        if (total_sell > FINAL_TOTAL) {
            cout << "오늘 " << total_sell << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
            break;
        }
    }

    return 0;
}
