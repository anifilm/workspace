// 생성자의 초기화 리스트 (initializer list)
#include <iostream>
#include <string.h>

using namespace std;

class Marine {
    int hp;					// 마린 체력
    int coord_x, coord_y;	// 마린 위치
    int damage;				// 공격력
    bool is_dead;

public:
    Marine();							// 기본 생성자
    Marine(int x, int y);				// x, y 좌표에 마린 생성

    int attack();						// 데미지를 리턴한다
    void be_attacked(int damage_earn);	// 입은 데미지
    void move(int x, int y);			// 새로운 위치

    void show_status();		// 상태를 보여준다
};

Marine::Marine()
    : coord_x(0), coord_y(0), hp(50), damage(5), is_dead(false) {}

Marine::Marine(int x, int y)
    : coord_x(x), coord_y(y), hp(50), damage(5), is_dead(false) {}

void Marine::move(int x, int y) {
    coord_x = x;
    coord_y = y;
}

int Marine::attack() { return damage; }

void Marine::be_attacked(int damage_earn) {
    hp -= damage_earn;
    if (hp <= 0) is_dead = true;
}

void Marine::show_status() {
    cout << "*** Marine ***" << endl;
    cout << "Location: (" << coord_x << ", " << coord_y << ")" << endl;
    cout << "HP: " << hp << endl;
}

int main() {

    Marine marine1(2, 3);
    Marine marine2(3, 5);

    marine1.show_status();
    marine2.show_status();

    return 0;
}
