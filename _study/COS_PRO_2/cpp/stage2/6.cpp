#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> floors) {
    int dist = 0;
    int length = floors.size();
    for(int i = 1; i < length; ++i){
        if(floors[i] > floors[i-1])
            dist += floors[i] - floors[i-1];
        else
            dist += floors[i-1] - floors[i];
    }
    return dist;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> floors = {1, 2, 5, 4, 2};
    int ret = solution(floors);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}
