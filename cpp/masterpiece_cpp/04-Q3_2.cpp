/*
Q3
string 클래스를 이용하여 빈칸을 포함하는 문자열을 입력받고 문자열에서 'a'가 몇개 있는지
출력하는 프로그램을 작성해 보자.
  (실행 결과 생략...)

  (2) 문자열에서 'a'를 찾기 위해 string 클래스의 find() 멤버 함수를 이용하여 작성하라.
      text.find('a', index);는 text 문자열의 index 위치부터 'a'를 찾아 문자열 내
      인덱스를 리턴한다.
*/
#include <iostream>

using namespace std;

int main() {

    string s;
    cout << "문자열 입력: ";
    getline(cin, s, '\n');

    int startIndex = 0, count_a = 0;
    while (true) {
        int fIndex = s.find('a', startIndex);
        if (fIndex == -1)
            break;
        else
            count_a++;
        startIndex = fIndex + 1;
    }
    cout << "문자 a는 " << count_a << "개 있습니다." << endl;

    return 0;
}
