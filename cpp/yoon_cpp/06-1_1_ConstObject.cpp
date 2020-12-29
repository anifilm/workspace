// const객체와 const객체의 특성들
#include <iostream>

using namespace std;

class SoSimple {
private:
    int num;
public:
    SoSimple(int n) : num(n) {}
    SoSimple& AddNum(int n) {
        num += n;
        return *this;
    }
    void ShowData() const {
        cout << "num: " << num << endl;
    }
};

int main() {

    const SoSimple obj(7);  // 객체를 const 선언하여 생성
//  obj.AddNum(20);  // AddNum() 함수는 const 함수가 아니므로 호출 불가
    obj.ShowData();  // const객체 obj는 const 함수만 호출 가능하다.

    return 0;
}
