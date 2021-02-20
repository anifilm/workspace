// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool desc(int a, int b){
  return a > b;
}

vector<int> solution(vector<int> score) {
    vector<int> answer;
    vector<int> v1 = score;
    vector<int> v2;
    sort(v1.begin(), v1.end(), desc);

    int count=1;
    for(int i=0; i<v1.size(); i++) {
        if (v1[i-1] == v1[i])
            v2.push_back(count-1);
        else
            v2.push_back(count);
        count++;
    }

    for (int i=0; i<score.size(); i++) {
        for (int j=0; j<score.size(); j++) {
            if (score[i] == v1[j]) {
                answer.push_back(v2[j]);
                break;
            }
        }
    }

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> score1 = {90, 87, 87, 23, 35, 28, 12, 46};
    vector<int> ret1 = solution(score1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 {";
    for(int i = 0; i < ret1.size(); i++){
        if (i != 0)
            cout << ", ";
        cout << ret1[i];
    }
    cout << "} 입니다." << endl;

    vector<int> score2 = {10, 20, 20, 30};
    vector<int> ret2 = solution(score2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 {";
    for(int i = 0; i < ret2.size(); i++){
        if (i != 0)
            cout << ", ";
        cout << ret2[i];
    }
    cout << "} 입니다." << endl;
}
