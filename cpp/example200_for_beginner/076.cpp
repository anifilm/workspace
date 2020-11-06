// Call by Address 이해하기
#include <iostream>

using namespace std;

void Func1(bool* is_on) {
    cout << "Call by address: " << is_on << ", sizeof(is_on): " << sizeof(is_on) << endl;
    // is_on은 주소값을 가지고 있다. (&is_tmp)
    // *is_on 포인터로 값에 접근할 수 있다.
}

void Func2(bool& is_on) {
    cout << "Call by reference: " << is_on << ", sizeof(is_on): " << sizeof(is_on) << endl;
    // is_on은 is_tmp의 값에 접근할 수 있다.
    // &is_on이 가리키는 주소값은 is_tmp의 주소값과 같다.
}

int main() {

    bool is_tmp {true};

    Func1(&is_tmp);     // call by address
    Func2(is_tmp);      // call by reference

    return 0;
}

/*

call by address (주소값을 전달하여 호출)

함수 호출시 인자로 전달되는 변수의 주소값을 전달한다.
따라서 함수 안에서 주소값를 참조하여 가리키는 인자의 값이 변경되면, 전달된 원본 값이 변경된다.

여기서 함수 호출시 &is_tmp로 변수의 주소값을 전달하면 포인터 *is_on으로 주소값을 받고
is_on은 주소값을 가리키며 *is_on으로 값에 접근할 수 있다.

bool *is_on = &is_tmp; (같은 의미)

(c언어에서는 이걸 call by reference로 사용한다.)

*/
