// 문자열에서 특정 문자만 제거하기 (erase, remove)
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string sentence {"I hate C++ Programming."};
    string find_str {"hate"};
    string replace_str {"like"};

    sentence.replace(sentence.find(find_str), find_str.length(), replace_str);

    cout << sentence << endl;

    return 0;
}
