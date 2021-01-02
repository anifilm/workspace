// STL 함수 for_each()를 이용하여 벡터의 모든 원소 출력
#include <iostream>
#include <vector>
#include <algorithm>  // for_each() 함수를 사용하기 위해 선언

using namespace std;

void print(int n) {
    cout << n << ' ';
}

int main() {

    vector<int> v = {1, 2, 3, 4, 5};

    // for_each()는 벡터 v의 첫 번째 요소(v.begin())부터 끝(v.end())까지 검색하면서,
    // 각 원소에 대해 3번째 매개 변수인 print(int n) 호출. 매개 변수 n에 요소 값 전달
    for_each(v.begin(), v.end(), print);
    cout << endl;

    return 0;
}
