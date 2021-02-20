// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int N, int M) {
    int answer = 0;
    for (int i = N; i <= M; i++) {
        if (i % 2 == 0) {
            answer += i * i;
        }
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int N = 4;
    int M = 7;
    int ret = solution(N, M);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;

    return 0;
}
