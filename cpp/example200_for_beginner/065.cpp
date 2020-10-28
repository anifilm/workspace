// 문자열 정렬하기 (sort)
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string sort_str1 {"gfedcba"};
    string sort_str2 {"AaBbCcDdEe"};

    sort(sort_str1.begin(), sort_str1.end());
    sort(sort_str2.begin(), sort_str2.end());

    cout << "정렬1: " << sort_str1 << endl;
    cout << "정렬2: " << sort_str2 << endl;

    return 0;
}
