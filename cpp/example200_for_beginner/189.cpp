// 첫번째 결과만 변경하기 (regex_replace)
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {

    regex reg1 {R"(\S)"};   // \S 공백 문자가 아닌 것. 숫자, 문자, 특수문자 모두 검색 대상에 해당
    regex reg2 {R"(\s)"};   // \t Tab 탭을 검색하도록 해야하지만
                            // 탭을 공백으로 변경하도록 설정되어 있어 공백 검색으로 변경함
    string str {"i like    coding"};

    string result1 = regex_replace(str, reg1, "[$&]", regex_constants::format_first_only);
    string result2 = regex_replace(str, reg2, "(Tab)", regex_constants::format_first_only);

    cout << "result1: " << result1 << endl;
    cout << "result2: " << result2 << endl;

    return 0;
}
