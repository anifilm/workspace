// using을 이용한 네임스페이스의 선언 1
#include <iostream>

namespace Hybrid {
    void HybFunc(void) {
        std::cout << "So simple function!" << std::endl;
        std::cout << "In namespace Hybrid!" << std::endl;
    }
}

int main() {

    using Hybrid::HybFunc;  // 키워드 using을 이용하여 '네임스페이스 Hybrid에 정의된
                            // HybFunc를 호출 할때에는, 네임스페이스를 지정하지 않고
                            // 호출하겠다'는 것을 선언하고 있다.
    HybFunc();

    return 0;
}
