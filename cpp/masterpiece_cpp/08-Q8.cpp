/*
Q8
다음 그림과 같은 상속 구조를 갖는 클래스를 설계한다.
모든 프린터는 모델명(model), 제조사(manufacturer), 인쇄 매수(printedCount), 인쇄
종이 잔량(availableCount)을 나타내는 정보와 print(int pages) 멤버 함수를 가지며,
print()가 호출할 때마다 pages 매의 용지를 사용한다.
잉크젯 프린터는 잉크 잔량(availableInk) 정보와 printInkJet(int pages) 멤버 함수를
추가적으로 가지며, 레이저 프린터는 토너 잔량(availableToner) 정보와 역시 printLaser(int pages)
멤버 함수를 추가적으로 가진다. 각 클래스에 적절한 접근 지정으로 멤버 변수와 함수, 생성자,
소멸자를 작성하고, 다음과 같이 실행되도록 전체 프로그램을 완성하라. 잉크젯 프린터 객체와
레이저 프린터 객체를 각각 하나씩 동적 생성하여 시작한다.
    (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Printer {
private:
    string model;
    string manufacturer;
    int printedCount;
    int availableCount;
public:
    Printer(string model, string manufacturer, int availableCount) {
        this->model = model;
        this->manufacturer = manufacturer;
        this->availableCount = availableCount;
    }
    string getModel() { return model; }
    string getManufacturer() { return manufacturer; }
    int getAvailableCount() { return availableCount; }

    bool print(int pages);
    virtual void show() = 0;
};

bool Printer::print(int pages) {
    printedCount = pages;
    if (availableCount < printedCount) {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
        return false;
    }
    else {
        availableCount -= printedCount;
        return true;
    }
}

class InkJetPrinter : public Printer {
private:
    int availableInk;
public:
    InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk)
        : Printer(model, manufacturer, availableCount) {
            this->availableInk = availableInk;
    }
    void printInkJet(int pages) {
        if (print(pages)) {
            if (availableInk > pages) {
                availableInk -= pages;
                cout << "프린트하였습니다." << endl;
            }
            else
                cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
        }
    }
    void show() {
        cout << "잉크젯: " << getModel() << ", " << getManufacturer() << ", ";
        cout << "남은 종이 " << getAvailableCount() << ", 남은 잉크 " << availableInk << endl;
    }
};

class LaserPrinter : public Printer {
private:
    int availableToner;
public:
    LaserPrinter(string model, string manufacturer, int availableCount, int availableToner)
        : Printer(model, manufacturer, availableCount) {
            this->availableToner = availableToner;
    }
    void printLaser(int pages) {
        if (print(pages)) {
            if (availableToner > pages) {
                availableToner -= pages;
                cout << "프린트하였습니다." << endl;
            }
            else
                cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
        }
    }
    void show() {
        cout << "레이저: " << getModel() << ", " << getManufacturer() << ", ";
        cout << "남은 종이 " << getAvailableCount() << ", 남은 토너 " << availableToner << endl;
    }
};

int main() {

    int choice, pages;
    char cont;

    InkJetPrinter* inkjet = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter* laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
    inkjet->show();
    laser->show();

    while (1) {
        cout << "\n프린터(1:잉크젯, 2:레이저)와 매수 입력: ";
        cin >> choice >> pages;
        switch (choice) {
            case 1:
                inkjet->printInkJet(pages);
                inkjet->show();
                laser->show();
                break;
            case 2:
                laser->printLaser(pages);
                inkjet->show();
                laser->show();
                break;
            default:
                cout << "잘못된 선택입니다." << endl;
                break;
        }
        cout << "계속 프린트 하시겠습니까(y/n): ";
        cin >> cont; cin.ignore();
        if (cont == 'y') continue;
        else if (cont == 'n') break;
    }

    return 0;
}
