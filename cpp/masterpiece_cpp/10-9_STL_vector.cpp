// vector 컨테이너 활용
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;  // 정수형 벡터 생성

    v.push_back(1);  // 벡터에 정수 1 삽입
    v.push_back(2);  // 벡터에 정수 2 삽입
    v.push_back(3);  // 벡터에 정수 3 삽입

    for (size_t i = 0; i < v.size(); i++)  // 벡터의 모든 요소 출력
        cout << v[i] << ' ';  // v[i]는 벡터의 i번째 요소
    cout << endl;

    v[0] = 10;  // 벡터의 첫 번째 요소를 10으로 변경
    int m = v[2];  // m에 3저장
    v.at(2) = 5;  // 벡터의 3번째 요소를 5로 변경

    for (size_t i = 0; i < v.size(); i++)  // 벡터의 모든 요소 출력
        cout << v[i] << ' ';  // v[i]는 벡터의 i번째 요소
    cout << endl;

    return 0;
}

/*

STL vector의 멤버 함수와 연산자 함수

멤버와 연산자 함수                  설명
push_back(element)              벡터의 마지막에 element 추가
at(int_index)                   index 위치에 요소에 대한 참조 반환
begin()                         벡터의 첫 번째 요소에 대한 참조 반환
end()                           벡터의 끝(마지막 요소 다음)을 가리키는 참조 반환
empty()                         벡터가 비어 있으면 true를 반환
erase(iterator it)              벡터에서 it가 가리키는 요소를 삭제. 삭제 후 자동으로 벡터 조절
insert(iterator it, element)    벡터 내 it위치에 element 삽입
size()                          벡터에 들어있는 요소의 개수를 반환
operator[]()                    지정된 요소에 대한 참조 반환
operator=()                     이 벡터를 다른 벡터에 치환(복사)

*/
