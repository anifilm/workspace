// 네임스페이스 기반의 함수 선언과 정의의 구분
#include <iostream>

namespace BestComImpl {
    void SimpleFunc(void);
}

namespace ProgComImpl {
    void SimpleFunc(void);
}

int main() {

    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();

    return 0;
}

void BestComImpl::SimpleFunc(void) {
    std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void) {
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}
