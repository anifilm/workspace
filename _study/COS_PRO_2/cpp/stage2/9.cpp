#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> votes, int N, int K) {
    int counter[11] = {0};
    for(int i = 0; i < votes.size(); ++i)
        counter[votes[i]] += 1;
    int answer = 0;
    for(int i = 1; i <= N; ++i) {
        cout << counter[i] << endl;
        if(counter[i] == K)
            answer += 1;
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    vector<int> votes = {2, 5, 3, 4, 1, 5, 1, 5, 5, 3};
    int N = 5;
    int K = 2;
    int ret = solution(votes, N, K);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}
