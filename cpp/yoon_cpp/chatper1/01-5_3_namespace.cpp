// 네임스페이스 기반의 함수 선언과 정의의 구분
#include <iostream>

namespace BestComImpl {
    void SimpleFunc(void);
}

namespace BestComImpl {
    void PrettyFunc(void);
}

namespace ProgComImpl {
    void SimpleFunc(void);
}

int main() {

    BestComImpl::SimpleFunc();

    return 0;
}

void BestComImpl::SimpleFunc(void) {
    std::cout << "BestCom이 정의한 함수" << std::endl;
    PrettyFunc();               // 동일한 네임스페이스
    ProgComImpl::SimpleFunc();  // 다른 네임스페이스
}

void BestComImpl::PrettyFunc(void) {
    std::cout << "So Pretty!" << std::endl;
}

void ProgComImpl::SimpleFunc(void) {
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}
