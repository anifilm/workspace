// 참조 매개 변수로 평균 리턴하기
#include <iostream>

using namespace std;

// 리턴 타입을 bool로 하고 평균값을 전달하기 위해 참조 매개 변수를 추가함
bool average(int a[], int size, int& avg) {
    if (size <= 0)
        return false;
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += a[i];
    avg = sum / size;
    return true;
}

int main() {

    int x[] = {0, 1, 2, 3, 4, 5};
    int avg;
    if (average(x, 6, avg)) cout << "평균은 " << avg << endl;
    else cout << "매개 변수 오류" << endl;

    if (average(x, -2, avg)) cout << "평균은 " << avg << endl;
    else cout << "매개 변수 오류" << endl;

    return 0;
}

/*

참조에 의한 호출의 장점

'주소에 의한 호출'은 포인터 타입으로 매개 변수를 선언하므로, 호출하는 쪽에서 주소를
전달하기 위해 & 연산자를 사용해야 하고, swap() 함수의 코드에서는 * 기호를 반복적으로
사용함에 따라, 실수의 가능성과 코드 작성의 긴장감이 배가 되고 코드의 가독성이 떨어진다.
그러나 참조 매개 변수를 사용하면 간단히 변수를 넘겨주기만 하면 되고, 함수 내에서도
참조 매개 변수를 일반 변수처럼 사용하기 때문에 작성이 쉽고 보기 좋은 코드가 된다.

*/
