// for each 반복문 사용하기 (C++/CLI)
#include <iostream>

using namespace std;

int main() {

    int data[] = {10, 20, 30, 40};

//  for each (int &i in data)   // for each문은 비주얼 스튜디오에서만 지원됨
    for (int &i : data)
        i += 10;

    cout << "=== for each ===" << endl;
//  for each (const int i in data)
    for (const int i : data)
        cout << i << ", ";
    cout << endl;

    return 0;
}
