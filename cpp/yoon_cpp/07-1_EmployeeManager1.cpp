// 문제의 제시를 위한 시나리오의 도입
#include <iostream>
#include <cstring>

using namespace std;

class PermanentWorker {
private:
    char name [100];
    int salary;  // 매달 지불해야 하는 급여액
public:
    PermanentWorker(const char* name, int money)
        : salary(money) {
            strcpy(this->name, name);
    }
    int GetPay() const {
        return salary;
    }
    void ShowSalaryInfo() const {
        cout << "name: " << name << ", ";
        cout << "salary: " << GetPay() << endl;
        cout << endl;
    }
};

class EmployeeHandler {
private:
    PermanentWorker* empList[50];
    int empNum;
public:
    EmployeeHandler() : empNum(0) {}
    ~EmployeeHandler() {
        for (int i = 0; i < empNum; i++)
            delete empList[i];
    }
    void AddEmployee(PermanentWorker* emp) {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const {
        for (int i = 0; i < empNum; i++)
            empList[i]->ShowSalaryInfo();
    }
    void ShowTotalSalary() const {
        int total = 0;
        for (int i = 0; i < empNum; i++)
            total += empList[i]->GetPay();
        cout << "salary total: " << total << endl;
    }
};

int main() {

    // 직원 관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
    EmployeeHandler handler;

    // 직원 등록
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    handler.AddEmployee(new PermanentWorker("JUN", 2000));

    // 이번 달에 지불해야 할 급여의 정보
    handler.ShowAllSalaryInfo();

    // 이번 달에 지불해야 할 급여의 총합
    handler.ShowTotalSalary();

    return 0;
}
