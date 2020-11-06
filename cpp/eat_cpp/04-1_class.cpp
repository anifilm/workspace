#include <iostream>

using namespace std;

// Animal Class 선언, 클래스를 이용해서 만들어진 객체를 인스턴스(instance)라고 부른다.
class Animal {
private:        // 인스턴스 변수 선언
    int food;
    int weight;

public:         // 인스턴스 메서드 선언
    void set_animal(int _food, int _weight) {
        food = _food;
        weight = _weight;
    }
    void increase_food(int inc) {
        food += inc;
        weight += (inc / 3);
    }
    void view_stat() {
        cout << "이 동물의 food  : " << food << endl;
        cout << "이 동물의 weight: " << weight << endl;
    }
};

int main() {

    Animal animal;
    animal.set_animal(100, 50);
    animal.increase_food(30);

    animal.view_stat();

    return 0;
}
