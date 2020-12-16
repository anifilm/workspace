// 난수 생성하기 (srand, rand)
#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i < 5; i++)
        cout << "난수: " << rand() << endl;

    return 0;
}

/*

rand 함수를 이용해 임의의 값을 얻으며 범위는 0 ~ 32767

*/
