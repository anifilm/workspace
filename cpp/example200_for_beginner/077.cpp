// const 변수 이해하기
#include <iostream>

using namespace std;

int main() {

    const string kMyName {"Chaeyoung Lim"};
    const string kMyJob {"C++ Programmer"};

    string question {"Who are you: "};
    string answer {"My job is: "};

    cout << question << kMyName << endl;
    cout << answer << kMyJob << endl;

    return 0;
}
