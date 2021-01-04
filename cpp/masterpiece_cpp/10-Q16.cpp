/*
Q16
vector<Shape*> v;를 이용하여 간단한 그래픽 편집기를 콘솔 바탕으로 만들어 보자. Shape과
Circle, Line, Rect 클래스는 다음과 같다. 생성된 도형 객체를 v에 삽입하고 관리하라.
9장 실습 문제 10번의 힌트를 참고하라.
  (클래스 소스 생략...)

그래픽 편집기의 기능은 "삽입", "삭제", "모두보기", "종료"의 4가지이고, 실행 과정은 다음과
같다.
  (실행 결과 생략...)

*/
#include <iostream>
#include <vector>

using namespace std;

class Shape {  // Shape은 추상 클래스
protected:
    virtual void draw() = 0;  // 순수 virtual 함수
public:
    void paint();
};

void Shape::paint() {
    draw();
}

class Circle : public Shape {
protected:
    virtual void draw();
};

void Circle::draw() {
    cout << "Circle" << endl;
}

class Rect : public Shape {
protected:
    virtual void draw();
};

void Rect::draw() {
    cout << "Rectangle" << endl;
}

class Line : public Shape {
protected:
    virtual void draw();
};

void Line::draw() {
    cout << "Line" << endl;
}

class UI {
public:
    static void start() {
        cout << "그래픽 에디터입니다." << endl;
    }
    static int menu() {
        int m;
        cout << "삽입(1), 삭제(2), 모두보기(3), 종료(4): ";
        cin >> m;
        return m;
    }
    static int addShape() {
        int s;
        cout << "선(1), 원(2), 사각형(3): ";
        cin >> s;
        return s;
    }
    static int deleteShape() {
        int d;
        cout << "삭제하고자 하는 도형의 인덱스: ";
        cin >> d;
        return d;
    }
};

class GraphicEditor {
private:
    vector<Shape*> v;
    vector<Shape*>::iterator it;
public:
    GraphicEditor() {}
    void showAll(vector<Shape*> &v, vector<Shape*>::iterator &it) {
        int idx = 0;
        for(it = v.begin(); it != v.end(); it++, idx++){  // vector v의 첫 원소부터 끝 원소까지 탐색 및 출력
            cout << idx << ": ";
            v.at(idx)->paint();
        }
    }
    void run();
};

void GraphicEditor::run() {
    UI::start();
    while (true) {
        switch (UI::menu()) {
            case 1:
                switch (UI::addShape()) {
                    case 1:  // 선을 선택한 경우
                        v.push_back(new Line());
                        break;
                    case 2:  // 원을 선택한 경우
                        v.push_back(new Circle());
                        break;
                    case 3:  // 사각형을 선택한 경우
                        v.push_back(new Rect());
                        break;
                    default:
                        cout << "잘못 선택하셨습니다." << endl;
                        break;
                }
                break;
            case 2: {
                size_t d = UI::deleteShape();
                if (d >= v.size() || d < 0) {  // 없는 인덱스에 대한 예외처리
                    cout << "없는 인덱스 입니다." << endl;
                    break;
                }
                it = v.begin();
                Shape* tmp = *(it + d);  // vector에서 원소가 삭제되고 난 후 객체 delete를 위해 저장
                v.erase(it + d);  // it + d 위치에 있는 원소 삭제
                delete[] tmp; // vector에서 삭제된 객체 delete
                break;
            }
            case 3:
                showAll(v, it);
                break;
            case 4:
                cout << "\n프로그램을 종료합니다." << endl;
                return;
        }
    }
}

int main() {

    GraphicEditor ge;
    ge.run();

    return 0;
}
