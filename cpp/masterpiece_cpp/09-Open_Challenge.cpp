/*
Open Challenge - Human의 Food 먹기 게임
게임에는 Human, Monster, Food의 세 객체가 등장하며, 이들은 10x20 격자판에서 각각 정해진
규칙에 의해 움직인다. Human 객체는 사용자의 키에 의해 왼쪽(a키), 아래(s키), 위(d키), 오른쪽(f키)
으로 한칸씩 움직이고, Monster는 한 번에 2칸씩, 왼쪽, 아래, 위, 오른쪽 방향으로 랜덤하게
움직인다. Food는 5번중에 3번은 제자이에 있고, 나머지 2번은 4가지 방향중 랜덤하게 한 칸씩
움직인다.
게임은 Human이 Monster에게 잡히면 실패로 끝난다.
다음은 각 객체의 이동을 정의하는 move()와 각 객체의 모양을 정의하는 getShape() 함수를
순수 가상 함수를 가진 추상 클래스 GameObject이다. GameObject를 상속받아 Human, Monster,
Food 클래스를 작성하라. 그리고 전체적인 게임을 진행하는 Game 클래스와 main() 함수를 작성
하고 프로그램을 완성하라.
  (GameObject 클래스 생략...)

키가 입력될 때마다 Human, Monster, Food 객체의 move()를 순서대로 호출한다. 게임이 진행되는
과정은 다음 그림과 같으며, 게임의 종료 조건에 일치하면 게임을 종료한다.
  (실행 결과 생략...)

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

static const int MAX_X = 20;
static const int MAX_Y = 10;

class GameObject {  // 추상 클래스
protected:
    int distance;  // 한 번 이동 거리
    int x, y;  // 현재 위치
public:
    GameObject(int startX, int startY, int distance) {  // 초기 위치와 이동거리 설정
        this->x = startX; this->y = startY;
        this->distance = distance;
    }
    virtual ~GameObject() {};  // 가상 소멸자
    int getX() { return x; }
    int getY() { return y; }
    bool collide(GameObject* p) {  // 이 객체가 객체 p와 충돌했으면 true 반환
        if (this->x == p->getX() && this->y == p->getY())
            return true;
        else
            return false;
    }
    virtual void move() = 0;  // 이동한 후 새로운 위치로 x, y 변경
    virtual char getShape() = 0;  // 객체의 모양을 나타내는 문자 반환
};

class Human : public GameObject {
public:
    Human(int startX, int startY, int distance)
        : GameObject(startX, startY, distance) {}
    virtual void move() {
        char key;
        cout << "왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> ";
        cin >> key;
        cout << endl;
        switch (key) {
            case 'a':  // 왼쪽
                x -= distance;
                if (x < 0) x = 0;
                break;
            case 'f':  // 오른쪽
                x += distance;
                if (x >= MAX_X) x = MAX_X - 1;
                break;
            case 'd':  // 위
                y -= distance;
                if (y < 0) y = 0;
                break;
            case 's':  // 아래
                y += distance;
                if (y >= MAX_Y) y = MAX_Y - 1;
                break;
        }
    }
    virtual char getShape() { return 'H'; }
};

class Monster : public GameObject {
public:
    Monster(int startX, int startY, int distance)
        : GameObject(startX, startY, distance) {
            srand((unsigned)time(0));
    }
    virtual void move() {
        int num;
        num = rand() % 2;
        switch (num) {
            case 0:
                x -= distance;
                if (x < 0) x = 0;
                break;
            case 1:
                x += distance;
                if (x >= MAX_X) x = MAX_X - 1;
                break;
        }
        num = rand() % 2;
        switch (num) {
            case 0:
                y -= distance;
                if (y < 0) y = 0;
                break;
            case 1:
                y += distance;
                if (y >= MAX_Y) y = MAX_Y - 1;
                break;
        }
    }
    virtual char getShape() { return 'M'; }
};

class Food : public GameObject {
private:
    int count;
public:
    Food(int startX, int startY, int distance)
        : GameObject(startX, startY, distance) {
            srand((unsigned)time(0));
            count = 0;
    }
    virtual void move() {
        int n;
        n = rand() % 5;
        if (n == 0) x += distance;
        else if (n == 1) x -= distance;

        if (x < 0) x = 0;
        if (x >= MAX_X) x = MAX_X - 1;

        n = rand() % 5;
        if (n == 0) y += distance;
        else if (n == 1) y -= distance;

        if (y < 0) y = 0;
        if (y >= MAX_Y) y = MAX_Y - 1;
    }
    virtual char getShape() { return '@'; }
};

class Game {
public:
    void run();
};

void Game::run() {
    Human* h = new Human(0, 0, 1);
    Monster* m = new Monster(5, 5, 2);
    Food* f = new Food(8, 9, 1);

    cout << "** Human의 Food 먹기 게임을 시작합니다 **" << endl;
    cout << endl;
    while (true) {
        for (int i = 0; i < MAX_Y; i++) {
            for (int j = 0; j < MAX_X; j++) {
                if (m->getY() == i && m->getX() == j) cout << m->getShape();	   // 순서 중요함 몬스터->헌터->음식 순으로 if문을
                else if (h->getY() == i && h->getX() == j) cout << h->getShape();  // 만들어야 같은 위치가 되었을 때 출력할 문자의 순서가 됨
                else if (f->getY() == i && f->getX() == j) cout << f->getShape();
                else cout << '-';
            }
            cout << endl;
        }

        if (m->collide(h)) {
            cout << "Human is Loser!!" << endl << "인간이 몬스터에게 잡혔습니다." << endl << endl;
            break;
        }
        else if (m->collide(f)) {
            cout << "Human is Loser!!" << endl << "몬스터가 음식을 먹었습니다." << endl << endl;
            break;
        }
        else if (h->collide(f)) {
            cout << "Human is Winner!!" << endl << "인간이 음식을 먹었습니다." << endl << endl;
            break;
        }

        h->move();
        m->move();
        f->move();
    }
}

int main() {

    Game* g = new Game;
    g->run();
    delete g;

    return 0;
}
