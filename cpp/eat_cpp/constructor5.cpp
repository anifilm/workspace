#include <iostream>
#include <string.h>

using namespace std;

class Photon_Cannon {

	int hp, shield;
	int coord_x, coord_y;
	int damage;

	public:

	Photon_Cannon(int x, int y);
	Photon_Cannon(const Photon_Cannon &pc);

	void show_status();
};

Photon_Cannon::Photon_Cannon(const Photon_Cannon &pc) {

	cout << "복사 생성자 호출!" << endl;

	hp = pc.hp;
	shield = pc.shield;
	coord_x = pc.coord_x;
	coord_y = pc.coord_y;
	damage = pc.damage;
}

Photon_Cannon::Photon_Cannon(int x, int y) {

	cout << "생성자 호출!" << endl;

	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;
}

void Photon_Cannon::show_status() {

	cout << "Photon Cannon" << endl;
	cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << endl;
	cout << " HP : " << hp << endl;
}

int main() {

	Photon_Cannon pc1(3, 3);
	Photon_Cannon pc2(pc1);
	Photon_Cannon pc3 = pc2;

	pc1.show_status();
	pc2.show_status();
}
