// static 함수
#include <iostream>

using namespace std;

class Marine {
    static int total_marine_num;
    const static int i {0};

    int hp;					// 마린 체력
    int coord_x, coord_y;	// 마린 위치
    bool is_dead;

    const int default_damage;	// 기본 공격력

public:
    Marine();				// 기본 생성자
    Marine(int x, int y);	// x, y 좌표에 마린 생성
    Marine(int x, int y, int default_demage);

    int attack();						// 데미지를 리턴한다
    void be_attacked(int damage_earn);	// 입은 데미지
    void move(int x, int y);			// 새로운 위치

    void show_status();		// 상태를 보여준다

    static void show_total_marine();
    ~Marine() {total_marine_num--;}
};

int Marine::total_marine_num {0};

void Marine::show_total_marine() {
    cout << "전체 마린 수: " << total_marine_num << endl;
}

Marine::Marine()
    : coord_x {0}, coord_y {0}, hp {50}, default_damage {5}, is_dead {false} {
        total_marine_num++;
}

Marine::Marine(int x, int y)
    : coord_x {x}, coord_y {y}, hp {50}, default_damage {5}, is_dead {false} {
        total_marine_num++;
}

Marine::Marine(int x, int y, int default_damage)
    : coord_x(x), coord_y(y), hp(50), default_damage(default_damage), is_dead(false) {
        total_marine_num++;
}

void Marine::move(int x, int y) {
    coord_x = x;
    coord_y = y;
}

int Marine::attack() {return default_damage;}

void Marine::be_attacked(int damage_earn) {
    hp -= damage_earn;
    if (hp <= 0) is_dead = true;
}

void Marine::show_status() {
    cout << "*** Marine ***" << endl;
    cout << "Location: (" << coord_x << ", " << coord_y << ")" << endl;
    cout << "HP: " << hp << endl;
    cout << "현재 총 마린 수: " << total_marine_num << endl;
}

void create_marine() {
    Marine marine3(10, 10, 4);
    Marine::show_total_marine();
}

int main() {

    Marine marine1(2 ,3, 5);
    Marine::show_total_marine();

    Marine marine2(3, 5, 10);
    Marine::show_total_marine();

    create_marine();

    cout << endl << "마린1이 마린2를 공격!" << endl;

    marine2.be_attacked(marine1.attack());

    marine1.show_status();
    marine2.show_status();

    return 0;
}
