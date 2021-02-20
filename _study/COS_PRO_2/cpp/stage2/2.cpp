#include <iostream>
#include <string>
#include <vector>

using namespace std;

int func_a(vector<int> arr){
    int count = 0;
    int length = arr.size();
    for(int i = 0; i < length; ++i)
        if (arr[i] % 5 == 0)
            count += 1;
    return count;
}

string func_b(int three, int five){
    if (three > five)
        return "three";
    else if (three < five)
        return "five";
    else
        return "same";
}

int func_c(vector<int> arr){
    int count = 0;
    int length = arr.size();
    for(int i = 0; i < length; ++i)
        if (arr[i] % 3 == 0)
            count += 1;
    return count;
}

string solution(vector<int> arr) {
    int count_three = func_c(arr);
    int count_five = func_a(arr);
    string answer = func_b(count_three, count_five);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> arr = {2, 3, 6, 9, 12, 15, 10, 20, 22, 25};
    string ret = solution(arr);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}
