// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> words) {
    string answer = "";
    for (int i = 0; i < words.size(); i++) {
        if (words[i].size() >= 5) {
            answer += words[i];
        }
    }
    if (answer.size() == 0) {
        answer += "empty";
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<string> words1 = {"my", "favorite", "color", "is", "violet"};
    string ret1 = solution(words1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret1 << " 입니다." << endl;

    vector<string> words2 = {"yes", "i", "am"};
    string ret2 = solution(words2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret2 << " 입니다." << endl;

    return 0;
}
