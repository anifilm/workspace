// 돌아온 마이펫
#include <iostream>

using namespace std;

typedef struct {
    char name[30];      // 이름
    int age;            // 나이
    int health;         // 체력
    int food;           // 배부른 정도
    int clean;          // 깨끗한 정도
} Animal;

void create_animal(Animal* animal) {
    cout << "\n동물의 이름? ";
    cin >> animal->name;
    cout << "동물의 나이? ";
    cin >> animal->age;

    animal->health = 100;
    animal->food = 100;
    animal->clean = 100;
}

// 놀아주면
void play(Animal* animal) {
    cout << "\n당신은 " << animal->name << "와 놀아줍니다." << endl;
    animal->health += 10;
    animal->food -= 20;
    animal->clean -= 30;
}

// 하루가 지나면
void one_day_pass(Animal *animal) {
    animal->health -= 10;
    animal->food -= 30;
    animal->clean -= 20;
}

// 동물 리스트 보기, 함수화 필요
// void show_list(Animal animal[], int a_num) {}

void show_stat(Animal* animal) {
    cout << endl << animal->name << "의 상태" << endl;
    cout << "체력  : " << animal->health << endl;
    cout << "배부름: " << animal->food << endl;
    cout << "청결  : " << animal->clean << endl;
}

int main() {

    Animal* list[10];
    int animal_num = 0;

    while (1) {
        cout << "1. 동물 추가하기" << endl;
        cout << "2. 놀기" << endl;
        cout << "3. 상태 보기" << endl;
        cout << "---------------" << endl;
        cout << "(종료... 0)" << endl;

        int input;
        cin >> input;

        if (input == 0) break;

        switch (input) {
            int play_with;
            case 1:
                list[animal_num] = new Animal;
                create_animal(list[animal_num]);
                animal_num++;
                break;
            case 2:
                cout << "\n누구랑 놀까? " << endl;
                // 동물 리스트 보기, 함수화 필요
                for (int i = 0; i != animal_num; i++)
                    cout << i << ". " << list[i]->name << endl;
                cin >> play_with;
                if (play_with < animal_num) play(list[play_with]);
                break;
            case 3:
                cout << "\n어느 동물을 볼까? " << endl;
                // 동물 리스트 보기, 함수화 필요
                for (int i = 0; i != animal_num; i++)
                    cout << i << ". " << list[i]->name << endl;
                cin >> play_with;
                if (play_with < animal_num) show_stat(list[play_with]);
                break;
        }

        for (int i = 0; i != animal_num; i++)
            one_day_pass(list[i]);
        cout << "\n하루가 지났습니다." << endl;
        cout << endl;
    }

    for (int i = 0; i != animal_num; i++)
        delete list[i];

    return 0;
}
