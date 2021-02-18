#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int number) {
    int count = 0;
    while(number >= 0){
        int n = number % 10;
        if (n == 2 || n == 3 || n == 5 || n == 7)
            count += 1;
        number /= 10;
        if (number <= 0) break;
    }
    return count;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    int number = 29022531;
    int ret = solution(number);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}
