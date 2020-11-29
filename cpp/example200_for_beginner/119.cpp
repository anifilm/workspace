// Friend 함수 사용하기
#include <iostream>
#include <string>

using namespace std;

class Ondal {
private:
    int year;
public:
    friend void GetYear(Ondal ondal) {
        cout << "아단성 전투 연도: " << ondal.year << endl;
    }
    void SetYear(int year) {
        this->year = year;
    }
};

int main() {

    Ondal ondal;
    ondal.SetYear(590);

    GetYear(ondal);

    return 0;
}
