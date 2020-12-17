// 복사 생성자의 호출 시점
#include <iostream>

using namespace std;

class SoSimple {
private:
    int num;
public:
    SoSimple(int n) : num(n) {
    }
    SoSimple(const SoSimple& copy) : num(copy.num) {
            cout << "called SoSimple(const SoSimple& copy)" << endl;
    }
    SoSimple& AddNum(int n) {   // 인자 전달시 복사 생성자 호출
        cout << "AddNum 호출" << endl;
        num += n;
        return *this;
    }
    void ShowData() {
        cout << "num: " << num << endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob) {
    cout << "return 이전" << endl;
    return ob;      // ob 객체의 복사본이 만들어지면서 반환이 진행됨 (복사 생성자 호출)
}

int main() {

    SoSimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData();
    obj.ShowData();

    return 0;
}
