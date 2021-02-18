#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int attack, int recovery, int hp) {
    int count = 0;
    while(true){
        count += 1;
        hp -= attack;
        if(hp <= 0)
            break;
        hp += recovery;
    }
    return count;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int attack = 30;
    int recovery = 10;
    int hp = 60;
    int ret = solution(attack, recovery, hp);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}
