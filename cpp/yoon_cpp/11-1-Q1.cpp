/* 문제 11-1 [깊은 복사를 하는 대임 연산자의 정의]
문제 1
Chapter 07에서는 예제 HASComposite.cpp를 통해서 다음의 두 클래스를 정의하였다. (완전한 클래스의 정의는 예제를 참고)
  class Gun {
      ...
  };

  class Police {
  private:
    int handcuffs;  // 소유한 수갑의 수
    Gun* pistol;    // 소유하고 있는 권총
  public:
      ...
  };

이에 Police 클래스를 대상으로 깊은 복사가 이뤄지도록 대입 연산자와 복사 생성자를 동시에 정의하고 이의 확인을 위한
main() 함수도 적절히 정의해 보자.
*/
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

class Police {
private:
    int handcuffs;  // 소유한 수값의 수
    Gun* pistol;    // 소유하고 있는 권총
public:
    Police(int bnum, int bcuff)
        : handcuffs(bcuff) {
            if (bnum > 0)
                pistol = new Gun(bnum);
            else
                pistol = NULL;
    }
    Police(const Police& ref)
        : handcuffs(ref.handcuffs) {
            if (ref.pistol != NULL)
                pistol = new Gun(*(ref.pistol));  // Gun의 복사 생성자 호출
            else
                pistol = NULL;
            cout << "called copy constructor" << endl;
    }
    Police& operator=(const Police& ref) {
        cout << "Police& operator=()" << endl;
        if (pistol != NULL)
            delete pistol;
        if (ref.pistol != NULL)
            pistol = new Gun(*(ref.pistol));
        else
            pistol = NULL;
        handcuffs = ref.handcuffs;
        return *this;
    }
    ~Police() {
        if (pistol != NULL)
            delete pistol;
    }
    void PutHandcuff() {
        cout << "SNAP!" << endl;
        handcuffs--;
    }
    void Shot() {
        if (pistol == NULL)
            cout << "Hut BBANG!" << endl;
        else
            pistol->Shot();
    }
};

int main() {

    Police pman1(5, 3);
    Police pman2 = pman1;  // 복사 생성자 호출
    pman2.Shot();
    pman2.PutHandcuff();

    Police pman3(0, 3);   // 권총을 소유하지 않은 경찰
    pman3 = pman1;        // pman1의 상태를 pman3으로 대입 연산자 호출을 통한 복사
    pman3.Shot();
    pman3.PutHandcuff();

    return 0;
}
