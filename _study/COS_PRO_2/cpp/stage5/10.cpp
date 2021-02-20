// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> time_table, int n) {
    vector<int> v(n);
    for (int i=0; i<time_table.size();i++) {
        v[i%n] += time_table[i];
    }
    int answer = *max_element(v.begin(), v.end());
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> time_table1 = {1, 5, 1, 9};
    int n1 = 3;
    int ret1 = solution(time_table1, n1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret1 << " 입니다." << endl;

    vector<int> time_table2 = {4, 8, 2, 5, 4, 6, 7};
    int n2 = 4;
    int ret2 = solution(time_table2, n2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret2 << " 입니다." << endl;
}
