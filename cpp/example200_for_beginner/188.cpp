// 문자열 일부 변경하기 (regex_replace)
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {

    regex reg1(R"(l|i|k|e)");   // | 여러 조건 사용시 구분자
    regex reg2(R"(\D)");        // \D 숫자를 제외한 문자만을 대상으로
    regex reg3(R"(\s)");        // \s 공백 문자만 대상으로
    string str = "i like coding";

    string result1 = regex_replace(str, reg1, "[$&]");
    string result2 = regex_replace(str, reg1, "*");
    string result3 = regex_replace(str, reg2, "_$&_");
    string result4 = regex_replace(str, reg3, "(space)");

    cout << "result1: " << result1 << endl;
    cout << "result2: " << result2 << endl;
    cout << "result3: " << result3 << endl;
    cout << "result4: " << result4 << endl;

    return 0;
}
