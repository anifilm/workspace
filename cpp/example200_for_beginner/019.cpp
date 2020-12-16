// 실수형 변수 이해하기 (double)
#include <iostream>

using namespace std;

int main() {

    double pi_d = 3.14;
    float pi_f = 3.14f;

    cout << "pi_d = " << pi_d << endl;
    cout << "pi_f = " << pi_f << endl;

    return 0;
}

/*

double  (8바이트)  -1.7E308 ~ +1.7E308

float   (4바이트)  -3.4E38  ~ +3.4E38

*/
