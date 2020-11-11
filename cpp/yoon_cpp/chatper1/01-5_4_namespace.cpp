// 네임스페이스의 중첩
#include <iostream>

namespace Parent {
    int num {0};

    namespace SubOne {
        int num {1};
    }
    namespace SubTwo {
        int num {2};
    }
}


int main() {

    std::cout << Parent::num << std::endl;
    std::cout << Parent::SubOne::num << std::endl;
    std::cout << Parent::SubTwo::num << std::endl;

    return 0;
}
