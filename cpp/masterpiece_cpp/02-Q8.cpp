/*
Q8
한 라인에 ';'으로 5개의 이름을 구분하여 입력받아, 각 이름을 끊어내어 화면에 출력하고 가장 긴 이름을 판별하라.
  (실행의 예 생략...)

*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char name[100], bigName[100];
    size_t len = 0;

    cout << "5명의 이름을 ';'으로 구분하여 입력하세요." << endl;
    for (int i = 0; i < 5; i++) {
        cin.getline(name, sizeof(name), ';');
        cout << i + 1 << " : " << name << endl;
        if (strlen(name) > len) {
            len = strlen(name);
            strcpy(bigName, name);
        }
    }
    cout << "가장 긴 이름은 " << bigName << endl;

    return 0;
}
