// 문자열 이동하기 (move)
#include <iostream>
#include <vector>

using namespace std;

int main() {

    string str1 = "I like C++ Programming.";
    string str2 = move(str1);

    vector<int> v1 {1, 2, 3};
    vector<int> v2 = move(v1);

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << endl;

    cout << "v1 size: " << v1.size() << endl;
    cout << "v2 size: " << v2.size() << endl;

    return 0;
}
