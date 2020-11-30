// Go-로 시작하는 단어 찾기 (regex-search)
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {

    string str {"Wang Geon, a descendant of Go-gu-ryeo nobillity, deemed the nation as the successor of Go-guryeo"};

    smatch match_info;

    regex reg {"Go-([^ ]*)"};  // [] 괄호 사이의 문자를 검색
                                // ^공백 공백을 제외한 모든 문자를 검색

    while (regex_search(str, match_info, reg)) {
        cout << match_info.str() << " " << endl;
        str = match_info.suffix().str();
    }

    return 0;
}
