/*
Q13
중식당의 주문 과정을 C++ 프로그램으로 작성해 보자. 다음 실행 결과와 같이 메뉴와 사람
수를 입력받고 이를 출력하면 된다. 잘못된 입력을 가려내는 부분도 코드에 추가하라.
  (실행 결과 생략...)

*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int choice, person_num;
    char menu[20];

    cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
    while (true) {
        cout << "짬뽕: 1, 짜장: 2, 군만두: 3, 종료: 4 >> ";
        cin >> choice;

        if (choice == 1)
            strcpy(menu, "짬뽕");
        else if (choice == 2)
            strcpy(menu, "짜장");
        else if (choice == 3)
            strcpy(menu, "군만두");
        else if (choice == 4) {
            cout << "오늘 영업은 끝났습니다." << endl;
            break;
        }
        else {
            cout << "다시 주문하세요!!" << endl;
            continue;
        }

        cout << "몇인분? ";
        cin >> person_num;

        cout << menu << " " << person_num << "인분 나왔습니다." << endl;
    }

    return 0;
}
