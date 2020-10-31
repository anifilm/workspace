// 2차원 배열 사용하기
#include <iostream>

using namespace std;

int main() {

    int data1[2][2] {1, 2, 3};
    int data2[2][3] {{1, } };

    cout << "data1[0][0] = " << data1[0][0] << endl;
    cout << "data1[0][1] = " << data1[0][1] << endl;
    cout << "data1[1][0] = " << data1[1][0] << endl;
    cout << "data1[1][1] = " << data1[1][1] << endl;
    cout << endl;

    cout << "data2[0][0] = " << data2[0][0] << endl;
    cout << "data2[0][1] = " << data2[0][1] + 2 << endl;
    cout << "data2[0][2] = " << data2[0][2] + 3 << endl;
    cout << "data2[1][0] = " << data2[1][0] + 4 << endl;
    cout << "data2[1][1] = " << data2[1][1] + 5 << endl;
    cout << "data2[1][2] = " << data2[1][2] + 6 << endl;

    return 0;
}
