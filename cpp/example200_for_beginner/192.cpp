// R 또는 r로 시작하는 문자열 찾기 (regex_match)
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main() {

    vector<string> Korea = {
        "Republic of Korea",
        "republic of Korea",
        "Republic of korea",
        "republic of korea",
        "South Korea",
        "south Korea",
        "South korea",
        "south korea"
    };

    regex reg {"([Rr]epublic)\\s.*"};   // [xy] 괄호 안의 모든 문자를 검색
                                        // () 괗호 안의 내용은 하나의 그룹이 된다.
                                        // \ 다음에 오는 메타 문자 검색
                                        // \s 공백 문자 검색
                                        // . 임의의 문자
                                        // * 앞 문자가 0개 이상 일치하는 문자
    smatch match_info;

    for (auto i : Korea) {
        if (regex_match(i, match_info, reg))
            cout << match_info[0] << endl;
    }

    return 0;
}
