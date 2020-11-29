// 예외 처리 응용하기 (char, int)
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> data;
    data.push_back(1);

    try {
        if (data.empty() == true)
            throw "백터가 비어 있습니다.";
        if (data.size() < 2)
            throw 99;
    }
    catch (char* e) {
        cout << "catch (char* e) " << e << endl;
    }
    catch (int e) {
        cout << "catch (int e) " << e << endl;
    }

    return 0;
}
