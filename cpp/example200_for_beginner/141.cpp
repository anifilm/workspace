// using 사용하기
#include <iostream>
#include <vector>

namespace MyArea {
    int Plus(int x, int y) {
        return x + y;
    }
}

using namespace std;
using namespace MyArea;
using MyVector = vector<int>;

int main() {

    MyVector data;
    data.push_back(1);
    data.push_back(2);

    cout << "Data: " << data.at(0) << ", " << data.at(1) << endl;
    cout << "Plus: " << Plus(2, 4) << endl;

    return 0;
}
