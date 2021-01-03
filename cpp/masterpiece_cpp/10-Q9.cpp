/*
Q9
STL의 vector 클래스를 이용하는 간단한 프로그램을 작성해보자. vector 객체를 생성하고, 키보드
로부터 정수를 입력받을 때마다 정수를 벡터에 삽입하고 지금까지 입력된 수와 평균을 출력하는 프로그램
을 작성하라. 0을 입력하면 프로그램이 종료한다.
  (실행 결과 생략...)

*/
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;
    int num, sum = 0;

    while (true) {
        cout << "정수를 입력하세요 (0을 입력하면 종료): ";
        cin >> num;
        if (num == 0) break;
        v.push_back(num);
        for (auto n : v)
            cout << n << ' ';
        cout << endl;
        sum += num;
        cout << "평균 = " << double(sum) / v.size() << endl;
    }

    cout << "\n프로그램을 종료합니다." << endl;

    return 0;
}
