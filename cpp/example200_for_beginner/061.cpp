// 문자열에서 특정 문자만 제거하기 (erase, remove)
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string sentence {"I like C++ Programming."};
    sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

    cout << sentence << endl;

    return 0;
}
