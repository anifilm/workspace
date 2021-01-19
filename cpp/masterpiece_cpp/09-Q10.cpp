/*
Q10
간단한 그래픽 편집기를 콘솔 바탕으로 만들어 보자. 그래픽 편집기의 기능은 "삽입", "삭제",
"모두보기", "종료"의 4가지 이고, 실행 과정은 다음과 같다.
  (실행 과정 생략...)

*/
#include <iostream>

using namespace std;

class Shape {  // Shape은 추상 클래스
private:
    Shape* next;
protected:
    virtual void draw() = 0;  // 순수 virtual 함수
public:
    Shape() { next = NULL; }
    virtual ~Shape() {}
    void paint();
    Shape* add(Shape* p);
    Shape* getNext() { return next; }
};

void Shape::paint() {
    draw();
}

Shape* Shape::add(Shape* p) {
    this->next = p;
    return p;
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
    Shape* pStart;
    Shape* pLast;
    Shape* p;
    Shape* prev;

public:
    GraphicEditor() {
        pStart = NULL;
        // 처음에 원 도형을 생성한다.
        // pStart = new Circle();
        // pLast = pStart;
    }
    ~GraphicEditor() {
        // 현재 연결된 모든 도형을 삭제한다.
        p = pStart;
        while (p != NULL) {
            Shape* q = p->getNext();  // 다음 도형 주소 기억
            delete p;  // 현재 도형 객체 소멸 (기본 클래스의 virtual 소멸자 호출)
            p = q;  // 다음 도형의 주소를 p에 저장
        }
    }
    void showAll() {
        // 현재 연결된 모든 도형을 화면에 그린다.
        p = pStart;
        int i = 0;
        while (p != NULL) {
            cout << i << ": ";
            p->paint();
            p = p->getNext();
            i++;
        }
    }
    void run();
};

void GraphicEditor::run() {
    UI::start();
    while (true) {
        switch (UI::menu()) {
            case 1:
                if (pStart == NULL) {
                    switch (UI::addShape()) {
                        case 1:
                            pStart = new Line();  // 처음에 선 객체를 생성한다.
                            pLast = pStart;
                            break;
                        case 2:
                            pStart = new Circle();  // 처음에 원 객체를 생성한다.
                            pLast = pStart;
                            break;
                        case 3:
                            pStart = new Rect();  // 처음에 사각형 객체를 생성한다.
                            pLast = pStart;
                            break;
                    }
                }
                else {
                    switch (UI::addShape()) {
                        case 1:
                            pLast = pLast->add(new Line());  // 선 객체 생성
                            break;
                        case 2:
                            pLast = pLast->add(new Circle());  // 원 객체 생성
                            break;
                        case 3:
                            pLast = pLast->add(new Rect());  // 사각형 객체 생성
                            break;
                    }
                }
                break;
            case 2: {
                int d = UI::deleteShape();
                int i = 0;
                p = pStart;
                while (p != NULL) {
                    if (d != i) {
                        prev = p;
                        p = p->getNext();
                        i++;
                    }
                    else {
                        if (pStart == p)
                            pStart = p->getNext();
                        else
                            prev->add(p->getNext());
                        delete p;
                        break;
                    }
                }
                break;
            }
            case 3:
                showAll();
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
