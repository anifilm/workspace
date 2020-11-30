// typedef 사용하기
#include <iostream>

using namespace std;

enum State {
    kOpen,
    kClose,
    kDisconnect
};
typedef State state;

struct Status {
    state machine1;
    state machine2;
} status;

int main() {

    status.machine1 = kOpen;
    status.machine2 = kDisconnect;

    cout << "상태 :" << status.machine1 << endl;
    cout << "상태 :" << status.machine2 << endl;

    return 0;
}
