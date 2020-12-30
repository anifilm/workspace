// 상속을 위한 기본 조건인 IS-A 관계의 성립
#include <iostream>
#include <cstring>

using namespace std;

class Computer {
private:
    char owner[50];
public:
    Computer(const char* name) {
        strcpy(owner, name);
    }
    void Calculate() {
        cout << "요청 내용을 계산합니다." << endl;
    }
};

class NotebookComp : public Computer {
private:
    int battery;
public:
    NotebookComp(const char* name, int initChag)
        : Computer(name), battery(initChag) {
    }
    void Charging() { battery += 5; }
    void UseBattery() { battery -= 1; }
    void MovingCal() {
        if (GetBatteryInfo() < 1) {
            cout << "충전이 필요합니다." << endl;
            return;
        }
        cout << "이동하면서 ";
        Calculate();
        UseBattery();
    }
    int GetBatteryInfo() { return battery; }
};

class TabletNotebook : public NotebookComp {
private:
    char regstPenModel[50];
public:
    TabletNotebook(const char* name, int initChag, const char* pen)
        : NotebookComp(name, initChag) {
            strcpy(regstPenModel, pen);
    }
    void Write(const char* penInfo) {
        if (GetBatteryInfo() < 1) {
            cout << "충전이 필요합니다." << endl;
            return;
        }
        if (strcmp(regstPenModel, penInfo) != 0) {
            cout << "등록된 펜이 아닙니다." << endl;
            return;
        }
        cout << "필기 내용을 처리합니다." << endl;
        UseBattery();
    }
};

int main() {

    NotebookComp note("이수종", 5);
    TabletNotebook tap("정수영", 5, "ISE-241-22");
    note.MovingCal();
    tap.Write("ISE-241-242");

    return 0;
}
