// '오렌지미디어 급여관리 확장성 문제'의 완전한 해결
#include <iostream>
#include <cstring>

using namespace std;

// 고용인 클래스
class Employee {
private:
    char name[100];
public:
    Employee(const char* name) {
        strcpy(this->name, name);
    }
    void ShowYourName() const {
        cout << "name: " << name << endl;
    }
    virtual int GetPay() const { return 0; }
    virtual void ShowSalaryInfo() const {}
};

// 정규직 클래스
class PermanentWorker : public Employee {
private:
//  char name[100];  // Employee 클래스를 도입
    int salary;  // 매달 지불해야 하는 급여액
public:
    PermanentWorker(const char* name, int money)
        : Employee(name), salary(money) {
    }
    int GetPay() const {
        return salary;
    }
    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << GetPay() << endl;
        cout << endl;
    }
};

// 임시직 클래스
// - 임시직 급여 '시간당 급여 x 일한 시간'의 형태
class TemporaryWorker : public Employee {
private:
    int workTime;    // 이 달에 일한 시간의 합계
    int payPerHour;  // 시간당 급여
public:
    TemporaryWorker(const char* name, int pay)
        : Employee(name), workTime(0), payPerHour(pay) {
    }
    void AddWorkTime(int time) {  // 일한 시간의 추가
        workTime += time;
    }
    int GetPay() const {  // 이 달의 급여
        return workTime * payPerHour;
    }
    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << GetPay() << endl;
        cout << endl;
    }
};

// 영업직 클래스
// - 영업직 급여 '기본급여(월 기본급여) + 인센티브'의 형태
class SalesWorker : public PermanentWorker {
private:
    int salesResult;    // 월 판매 실적
    double bonusRatio;  // 상여금 비율
public:
    SalesWorker(const char* name, int money, double ratio)
        : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {
    }
    void AddSalesResult(int value) {
        salesResult += value;
    }
    int GetPay() const {  // PermanentWorker의 GetPay() 함수 호출
        return PermanentWorker::GetPay() + int(salesResult * bonusRatio);
    }
    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << GetPay() << endl;  // SalesWorker의 GetPay() 함수를 호출함
        cout << endl;
    }
};

class EmployeeHandler {
private:
    Employee* empList[50];
    int empNum;
public:
    EmployeeHandler() : empNum(0) {}
    ~EmployeeHandler() {
        for (int i = 0; i < empNum; i++)
            delete empList[i];
    }
    void AddEmployee(Employee* emp) {
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

    // 정규직 등록
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));

    // 임시직 등록
    TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
    alba->AddWorkTime(5);  // 5시간 일한 결과를 등록
    handler.AddEmployee(alba);

    // 영업직 등록
    SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
    seller->AddSalesResult(7000);  // 영업 실적 7000
    handler.AddEmployee(seller);

    // 이번 달에 지불해야 할 급여의 정보
    handler.ShowAllSalaryInfo();

    // 이번 달에 지불해야 할 급여의 총합
    handler.ShowTotalSalary();

    return 0;
}
