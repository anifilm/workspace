#include <iostream>
#include <string>
#include <vector>

using namespace std;

int func_a(vector<int> time_table) {
    int answer = 0;
    for(int i = time_table.size()-1; i >= 0; i--) {
        if(time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

int func_b(vector<int> time_table, int class1, int class2) {
    int answer = 0;
    for(int i = class1; i < class2; i++)
        if(time_table[i] == 0)
            answer++;
    return answer;
}

int func_c(vector<int> time_table) {
    int answer = 0;
    for(int i = 0; i < time_table.size(); i++) {
        if(time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

int solution(vector<int> time_table) {
    int answer = 0;
    int first_class = func_c(time_table);
    int last_class = func_a(time_table);
    answer = func_b(time_table, first_class, last_class);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> time_table = {1, 1, 0, 0, 1, 0, 1, 0, 0, 0};
    int ret = solution(time_table);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}
