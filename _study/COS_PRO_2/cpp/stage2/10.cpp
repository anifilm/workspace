#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> purchase) {
    int total = 0;
    for(int i = 0; i < purchase.size(); ++i){
        if(purchase[i] >= 1000000)
            total += 50000;
        else if(purchase[i] >= 600000)
            total += 30000;
        else if(purchase[i] >= 400000)
            total += 20000;
        else if(purchase[i] >= 200000)
            total += 10000;
    }
    return total;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    vector<int> purchase = {150000, 210000, 399990, 990000, 1000000};
    int ret = solution(purchase);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}
