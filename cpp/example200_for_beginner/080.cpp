// enum class 이해하기
#include <iostream>

using namespace std;

enum Status {
    normal = 0,         // 0
    abnormal,           // 1
    disconnect = 100,   // 100
    close               // 101
};

enum class MachineStatus : char {
    normal = 'n',       // 110, n
    abnormal,           // 111, o
    disconnect = 100,   // 100, d
    close               // 101, e
};

int main() {

    MachineStatus machine = MachineStatus::abnormal;

    if (machine == MachineStatus::normal)
        cout << "Status: normal" << endl;
    else if (machine == MachineStatus::abnormal)
        cout << "Status: abnormal" << endl;
    else if (machine == MachineStatus::disconnect)
        cout << "Status: disconnect" << endl;
    else
        cout << "Status: close" << endl;

    cout << "machine: " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;

    return 0;
}
