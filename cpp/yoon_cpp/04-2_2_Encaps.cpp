// 캡슐화 (Encapsulation)
#include <iostream>

using namespace std;

// 콧물 처치용 캡슐
class SinivelCap {
public:
    void Take() const { cout << "콧물이 싹~ 낫습니다." << endl; }
};

// 재채기 처치용 캡슐
class SneezeCap {
public:
    void Take() const { cout << "재채기가 멎습니다." << endl; }
};

// 코믹힘 처치용 캡슐
class SnuffleCap {
public:
    void Take() const { cout << "코가 뻥 뚫립니다." << endl; }
};

class CONTAC600 {
private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

public:
    void Take() const {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient {
public:
    /*
    void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }
    void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
    void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }
    */
    void TakeCONTAC600(const CONTAC600& cap) const { cap.Take(); }
};

int main() {
    /*
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;
    */
    CONTAC600 cap;

    ColdPatient sufferer;
    /*
    sufferer.TakeSinivelCap(scap);
    sufferer.TakeSneezeCap(zcap);
    sufferer.TakeSnuffleCap(ncap);
    */
    sufferer.TakeCONTAC600(cap);

    return 0;
}

/*

 - 정보를 은닉시키기는 쉽다. 그러나 캡슐화는 어렵다.
경험 많은 객체지향 프로그래머를 구분하는 첫번째 기준은 캡슐화이다. 캡슐화는 일관되게
적용할 수 있는 단순한 개념이 아니고, 구현하는 프로그램의 성격과 특성에 따라서 적용하
는 범위가 달리지는, 흔히 하는 말로 정답이란 것이 딱히 없는 개념이기 때문이다.

 - 캡슐화에는 정보은닉이 기본적으로 포함된다.
캡슐화는 감사는 개념이다. 그런데 감싸려면 안전하게 감싸야 한다. 다시 말해서 이왕이면
멤버변수가 보이지 않게 정보를 은닉해서 감싸는 것이 좋다. 그래서 캡슐화는 기본적으로
정보은닉을 포함하는 개념이라고도 이야기한다. 그러나 지금 여러분에겐 이 둘을 별개의
개념으로 접근하고 이해하는 것이 우선이다.

*/
