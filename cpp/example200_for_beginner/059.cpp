// 문자열 일부 지우기 (erase)
#include <iostream>

using namespace std;

int main() {

    string sentence {"I hate C++ Programming."};
    sentence.erase(0, 7);   // 시작 인덱스, 제거할 문자의 개수

    cout << "I like " << sentence << endl;

    return 0;
}
