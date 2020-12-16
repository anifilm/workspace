// 일치하는지 확인하기, 숫자 찾기 (regex_match, regex_search)
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {

    regex reg1(R"(\d+)");  // \d 숫자를 검색 조건으로
    string str1 = "1234";

    bool is_match = regex_match(str1, reg1);

    cout << boolalpha;
    cout << "is_match = " << is_match << endl;

    regex reg2(R"(\d+)"); // \d+ 숫자를 검색 조건으로 (여러 자리를 대상으로)
    string str2 = "ab 123456 cd ef";

    smatch match_info;
    regex_search(str2, match_info, reg2);

    cout << "number: " << match_info.str() << endl;

    return 0;
}
