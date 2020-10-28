// 문자열 중간에 문자열 추가하기 (insert)
#include <iostream>

using namespace std;

int main() {

    string sentence {"I C++ Programming."};
    sentence.insert(2, "like ");
    cout << sentence << endl;

    sentence.insert(11, "and Java ");
    cout << sentence << endl;

    return 0;
}
