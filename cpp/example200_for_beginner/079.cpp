// enum 이해하기
#include <iostream>

using namespace std;

enum Status {
    normal = 0,         // 0
    abnormal,           // 1
    disconnect = 100,   // 100
    close               // 101
};

int main() {

    Status number = disconnect;

    if (number == Status::normal)
        cout << "Status: normal" << endl;
    else if (number == abnormal)
        cout << "Status: abnormal" << endl;
    else if (number == 100)
        cout << "Status: disconnect" << endl;
    else
        cout << "Status: close" << endl;

    return 0;
}
