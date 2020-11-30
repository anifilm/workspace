// 소수점 분리하기 (modf)
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x {1.2345};
    double div{}, mod{};

    mod = modf(x, &div);

    cout << "1.2345의 몫: " << div << ", 나머지: " << mod << endl;

    return 0;
}
