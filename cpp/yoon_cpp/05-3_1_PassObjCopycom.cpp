// 복사 생성자의 호출 시점
#include <iostream>

using namespace std;

class SoSimple {
private:
    int num;
public:
    SoSimple(int n)
        : num {n} {
    }
    SoSimple(const SoSimple& copy)
        : num {copy.num} {
            cout << "called SoSimple(const SoSimple& copy)" << endl;
    }
    void ShowData() {
        cout << "num: " << num << endl;
    }
};

void SimpleFuncObj(SoSimple ob) {
    ob.ShowData();
}

int main() {

    SoSimple obj {7};
    cout << "함수호출 전" << endl;
    SimpleFuncObj(obj);     // 호출이 되는 순간 객체 obj를 인자로 전달
                            // 매개변수 ob의 복사 생성자가 호출되고, 인자로 obj가 전달
    cout << "함수호출 후" << endl;

    /*
    함수 호출시 초기화 대상은 ob 객체이다. 그리고 ob 객체는 obj 객체로 초기화 된다.
    따라서 ob 객체의 복사 생성자가 호출되면서, obj 객체가 인자로 전달되어야 한다.
    */

    return 0;
}

/*

복사 생성자가 호출되는 시점은 크게 세가지로 구분할 수 있다.

 - case1: 기존에 생성된 객체를 이용해서 새로운 객체를 초기화하는 경우 (앞서 보인 경우)
 - case2: Call-by-value 방식의 함수호출 과정에서 객체를 인자로 전달하는 경우
 - case3: 객체를 반환하되, 참조형으로 반환하지 않는 경우

이들은 모두 다음의 공통점을 지닌다.
"객체를 새로 생성해야 한다. 단, 생성과 동시에 동일한 자료형의 객체로 초기화해야 한다."

*/
