// cin과 >>로 키 입력 받기
#include <iostream>

using namespace std;

int main() {

    int width;
    cout << "너비를 입력하세요: ";
    cin >> width;   // 키보드로부터 정수 값 너비를 읽어 width 변수에 저장

    int height;
    cout << "높이를 입력하세요: ";
    cin >> height;  // 키보드로부터 정수 값 높이를 읽어 height 변수에 저장

    int area = width * height;  // 사각형의 면적 계산
    cout << "면적은 " << area << endl;  // 면적을 출력하고 다음 줄로 넘어감

    return 0;
}
