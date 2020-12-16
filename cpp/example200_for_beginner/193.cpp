// 시작, 끝 문자로 문자열 찾기 (regex_match)
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main() {

    vector<string> Korea = {
        "Republic of Korea",
        "republic of Korea, since 1945",
        "Republic of korea, since 1945",
        "republic of korea",
        "south Korea, since 1945",
        "south korea",
        "SOUTH KOREA, since 1945",
        "south Korea"
    };

    regex reg("(SOUTH|south).*(1945)");

    smatch match_info;

    for (auto i : Korea) {
        if (regex_match(i, match_info, reg))
            cout << match_info[0] << endl;
    }

    return 0;
}
