// 복사 생성자의 호출 시점 (반환할 때 만들어진 객체는 언제 사라져요?)
#include <iostream>

using namespace std;

class Temporary {
private:
    int num;
public:
    Temporary(int n)
        : num {n} {
            cout << "create obj: " << num << endl;
    }
    void ShowTempInfo() {
        cout << "My num is " << num << endl;
    }
    ~Temporary() {
        cout << "destroy obj: " << num << endl;
    }
};

int main() {

    Temporary(100);
    cout << "********** after make!" << endl << endl;

    Temporary(200).ShowTempInfo();
    cout << "********** after make!" << endl << endl;

    const Temporary& ref = Temporary(300);
    cout << "********** end of main!" << endl << endl;

    return 0;
}
