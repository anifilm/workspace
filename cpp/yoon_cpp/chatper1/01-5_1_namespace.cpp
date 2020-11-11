// 네임스페이스 (namespace)의 기본
#include <iostream>

namespace BestComImpl {
    void SimpleFunc(void) {
        std::cout << "BestCom이 정의한 함수" << std::endl;
    }
}

namespace ProgComImpl {
    void SimpleFunc(void) {
        std::cout << "ProgCom이 정의한 함수" << std::endl;
    }
}

int main() {

    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();

    return 0;
}

/*

위 예제에서 사용된 연산자 ::을 가리켜 '범위지정 연산자 (scope resolution operator)'라고 한다.
그 이름이 의미하듯이 네임스페이스를 지정할 때 사용하는 연산자이다.

*/
