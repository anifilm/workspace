// pair 사용하기
#include <iostream>
#include <string>

using namespace std;

int main() {

    pair<string, int> data {"백제 근초고왕", 13};

    cout << data.first << " " << data.second << "대왕" << endl;

    return 0;
}
