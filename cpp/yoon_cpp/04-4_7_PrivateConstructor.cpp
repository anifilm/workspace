// private 생성자
#include <iostream>

using namespace std;

class AAA {
private:
    int num;

public:
    AAA() : num(0) {}

    AAA& CreateInitObj(int n) const {
        AAA* ptr = new AAA(n);
        return *ptr;
    }

    void ShowNum() const { cout << num << endl; }

private:
    // private 생성자 (TODO 이해가 잘 안된다, 추가 학습 필요)
    AAA(int n) : num(n) {}
};

int main() {

    AAA base;
    base.ShowNum();

    AAA& obj1 = base.CreateInitObj(3);
    obj1.ShowNum();

    AAA& obj2 = base.CreateInitObj(12);
    obj2.ShowNum();

    delete &obj1;
    delete &obj2;
    return 0;
}
