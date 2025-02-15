/* 문제 01-1 [C++ 기반의 데이터 입출력]
문제 4
판매원들의 급여 계산 프로그램을 작성해 보자. 이 회사는 모든 판매원에게 매달 50만원의
기본 급여와 물품 판매 가격의 12%에 해당하는 돈을 지급한다. 예를 들어서 민수라는 친구의
이번 달 물품 판매 금액이 100만원이라면, 50 + 100 * 0.12 = 62
따라서 62만원을 급여로 지급 받는다.
단, 아래의 실행의 예에서 보이듯이 이러한 급여의 계산은 -1이 입력될 때까지 계속 되어야 한다.
*/
#include <iostream>

int CalSalary(int sales) {
    return int(50 + sales * 0.12);
}

int main() {

    int sales;

    while (1) {
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin >> sales;
        if (sales == -1) {
            std::cout << "프로그램을 종료합니다." << std::endl;
            break;
        } else
            std::cout << "이번 달 급여: " << CalSalary(sales) << "만원" << std::endl;
    }

    return 0;
}
