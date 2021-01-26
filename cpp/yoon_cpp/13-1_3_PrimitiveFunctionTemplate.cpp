// 둘 이상의 형(Type)에 대해 템플릿 선언하기
#include <iostream>

using namespace std;

template <typename T1, typename T2>
void ShowData(double num) {
    cout << (T1)num << ", " << (T2)num << endl;
}

int main() {

    ShowData<char, int>(65);
    ShowData<char, int>(67);
    ShowData<char, double>(68.9);
    ShowData<short, double>(69.2);
    ShowData<short, double>(70.4);

    return 0;
}
