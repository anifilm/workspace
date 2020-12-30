// HAS-A 관계도 상속의 조건은 되지만 복합 관계로 이를 대신하는 것이 일반적이다.
#include <iostream>
#include <cstring>

using namespace std;

class Gun {
private:
    int bullet;  // 장전된 총알의 수
public:
    Gun(int bnum) : bullet(bnum) {}
    void Shot() {
        cout << "BBANG!" << endl;
        bullet--;
    }
};

class Police : public Gun {
private:
    int handcuffs;  // 소유한 수값의 수
public:
    Police(int bnum, int bcuff)
        : Gun(bnum), handcuffs(bcuff) {
    }
    void PutHandcuff() {
        cout << "SNAP!" << endl;
        handcuffs--;
    }
};

int main() {

    Police pman(5, 3);  // 총알 5, 수갑 3
    pman.Shot();
    pman.PutHandcuff();

    return 0;
}
