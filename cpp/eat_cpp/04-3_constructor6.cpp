// 복사 생성자의 중요성 (Deep Copy, Shallow Copy)
#include <iostream>
#include <string.h>

using namespace std;

class Photon_Cannon {
    int hp, shield;
    int coord_x, coord_y;
    int damage;
    char *name;

public:
    Photon_Cannon(int x, int y);
    Photon_Cannon(int x, int y, const char *cannon_name);
    Photon_Cannon(const Photon_Cannon &pc);
    ~Photon_Cannon();

    void show_status();
};

Photon_Cannon::Photon_Cannon(int x, int y) {
    hp = shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;
    name = NULL;
}

Photon_Cannon::Photon_Cannon(const Photon_Cannon &pc) {
    cout << "복사 생성자 호출!" << endl;
    hp = pc.hp;
    shield = pc.shield;
    coord_x = pc.coord_x;
    coord_y = pc.coord_y;
    damage = pc.damage;
    name = new char[strlen(pc.name) + 1];
    strcpy(name, pc.name);
}

Photon_Cannon::Photon_Cannon(int x, int y, const char *cannon_name) {
    cout << "생성자 호출!" << endl;
    hp = shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;
    name = new char[strlen(cannon_name) + 1];
    strcpy(name, cannon_name);
}

Photon_Cannon::~Photon_Cannon() {
    cout << "소멸자 호출!" << endl;
    if (name) delete[] name;
}

void Photon_Cannon::show_status() {
    cout << "Photon Cannon: " << name << endl;
    cout << "Location: (" << coord_x << ", " << coord_y << ")" << endl;
    cout << "HP: " << hp << endl;
}

int main() {

    Photon_Cannon pc1(3, 3, "Cannon");
    Photon_Cannon pc2 = pc1;

    pc1.show_status();
    pc2.show_status();

    return 0;
}
