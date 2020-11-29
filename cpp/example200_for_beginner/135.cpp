// Thread 사용하기 (detach)
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void Pause(int sec) {
    this_thread::sleep_for(chrono::seconds(sec));
    cout << sec << "초 대기" << endl;
}

int main() {

    thread sleep1(Pause, 3);
    thread sleep2(Pause, 5);
    thread sleep3(Pause, 4);

    sleep1.detach();
    sleep2.detach();
    sleep3.detach();

    getchar();

    return 0;
}
