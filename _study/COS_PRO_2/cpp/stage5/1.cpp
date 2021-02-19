#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> ladders, int win) {
    int answer = 0;

    vector<int> player = { 1, 2, 3, 4, 5, 6 };

    for(int i = 0; i < ladders.size(); i++) {
        int temp = player[ladders[i][0]-1];
        player[ladders[i][0]-1] = player[ladders[i][0]];
        player[ladders[i][0]] = temp;
    }

    answer = player[win-1];

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<vector<int>> ladders = {{1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6}};
    int win = 3;
    int ret = solution(ladders, win);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}
