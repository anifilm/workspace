/* 이론 문제
Q16
vector<char> 타입의 객체 v가 함수 print()의 매개 변수로 넘어왔을 때, 반복문을 이용하여
모든 원소를 화면에 출력하고자 한다. 빈칸에 적절한 코드를 삽입하라.

void print(vector<char> &v) {
    ____________________
    for (it = v.begin(); it != v.end(); it++) {
        char c = *it;
        cout << c;
    }
}

*/
#include <iostream>
#include <vector>

using namespace std;

void print(vector<char> &v) {
    vector<char>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        char c = *it;
        cout << c;
    }
}

int main() {
    vector<char> c = {'I', ' ', 'l', 'o', 'v', 'e', ' ', 'C', '+', '+', '!', '!'};
    print(c);

    return 0;
}
