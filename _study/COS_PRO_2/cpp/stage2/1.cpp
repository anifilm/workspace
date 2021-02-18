#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int max_product_number = 10;

vector<int> func_a(vector<int> gloves){
    int gloves_len = gloves.size();
    vector<int> counter(max_product_number + 1, 0);

    for(int i = 0; i < gloves_len; ++i)
        counter[gloves[i]]++;

    return counter;
}

int min(int a, int b){
    return a < b ? a : b;
}

int solution(vector<int> left_gloves, vector<int> right_gloves) {
    vector<int> left_counter = func_a(left_gloves);
    vector<int> right_counter = func_a(right_gloves);
    for (int c : left_gloves)
        cout << c << endl;
    cout << endl;
    for (int c : left_counter)
        cout << c << endl;


    int total = 0;
    for(int i = 1; i <= max_product_number; ++i)
        total += min(left_counter[i], right_counter[i]);
    return total;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> left_gloves = {2, 1, 2, 2, 4};
    vector<int> right_gloves = {1, 2, 2, 4, 4, 7};
    int ret = solution(left_gloves, right_gloves);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}
