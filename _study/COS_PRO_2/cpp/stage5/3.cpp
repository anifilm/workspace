#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int speed, vector<int> cars) {
    int answer = 0;

    for(int i = 0; i < cars.size(); i++) {
        if(cars[i] >= speed * 11 / 10 && cars[i] < speed * 12 / 10)
            answer += 3;
        else if(cars[i] >= speed * 12 / 10 && cars[i] < speed * 13 / 10)
            answer += 5;
        else if(cars[i] >= speed * 13 / 10)
            answer += 7;
    }

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int speed = 100;
    vector<int> cars = {110, 98, 125, 148, 120, 112, 89};
    int ret = solution(speed, cars);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}
