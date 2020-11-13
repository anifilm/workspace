// Section 13
// Friend

#include <iostream>
#include <string>
#include "Player.h"
#include "Other_class.h"
#include "Friend_class.h"

using namespace std;

void display_player(Player& p) {
    cout << p.name << endl;
    cout << p.health << endl;
    cout << p.xp << endl;
}

int main() {

    Player hero("Hero", 100, 35);
    display_player(hero);

    Other_class other;
    other.display_player(hero);

    Friend_class friend_class;
    friend_class.set_hero_name(hero, "Super hero");
    friend_class.display_player(hero);

    return 0;
}
