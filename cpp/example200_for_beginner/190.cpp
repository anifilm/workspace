// 모든 숫자 찾기 (regex_search)
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main() {

    regex reg {R"(\d+)"};   // \d+ 숫자를 검색 조건으로 (여러 자리를 대상으로)
    const string str = "12 34ab 56 cd78__ !9 10 ==11";

    vector<string> result;
    auto start = str.begin();
    auto end = str.end();

    smatch match_info;

    while (regex_search(start, end, match_info, reg)) {
        result.push_back(match_info.str());
        start = match_info[0].second;
    }

    for (auto i : result)
        cout << i << ", ";
    cout << endl;

    return 0;
}
