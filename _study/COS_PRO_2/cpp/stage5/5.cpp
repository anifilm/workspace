#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;

    for(int i = 1; i <= b; i++) {
        if((b * i) % a == 0) {
            answer = b * i;
            break;
        }
    }

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
int main() {
    int a = 4;
    int b = 6;
    int ret = solution(a, b);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << "입니다." << endl;
}
