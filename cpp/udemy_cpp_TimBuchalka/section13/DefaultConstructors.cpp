// Section 13
// Default Constructors

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string name_val) {
        name = name_val;
    }
    string get_name() {
        return name;
    }

    Player() {
        name = "None";
        health = 100;
        xp = 3;
    }
    Player(string name_val, int health_val, int xp_val) {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
};

int main() {

    Player hero;
    Player frank {"Frank", 100, 3};
    frank.set_name("Frank");
    cout << frank.get_name() << endl;

	return 0;
}