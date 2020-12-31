/* 문제 08-1 [상속 관계의 확장과 추상 클래스]
예제 EmployeeManager4.cpp를 확장하여 다음 특성에 해당하는 ForeignSalesWorker 클래스
를 추가로 정의해 보자.

위험수당의 지급방식은 '위험의 노출도'에 따라서 다음과 같이 나뉘며, 한번 결정된 직원의
'위험 노출도'는 변경되지 않는다고 가정한다. (이는 const 멤버 변수의 선언을 유도하는 것이다.)
 - 리스크 A: 영업직의 기본급여와 인센티브 합계 총액의 30%를 추가로 지급힌다.
 - 리스크 B: 영업직의 기본급여와 인센티브 합계 총액의 20%를 추가로 지급힌다.
 - 리스크 C: 영업직의 기본급여와 인센티브 합계 총액의 10%를 추가로 지급힌다.

다음 main() 함수와 함께 동작하도록 ForeignSalesWorker 클래스를 정의하기 바라며, Employee
클래스는 객체 생성이 불가능한 추상 클래스로 정의하기 바란다.
  (main() 함수 생략...)

위의 main() 함수에서 보이는 RISK_LEVEL 이름 공간의 RISK_A, RISK_B, RISK_C는 enum형으로
선언된 상수이다. 그럼 이어서 실행 결과를 보이겠다.
  (실행 결과 생략...)

위의 실행 결과에서 salay 내역은 일반 영업직 직원의 급여 계산 결과이며 (기본급에 상여급을
더한 결과), risk pay가 위험 수당에 속한다.
*/
#include <iostream>
#include <cstring>

using namespace std;

// 고용인 클래스, 순수 virtual 함수를 통해 추상 클래스로 정의됨
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
    virtual int GetPay() const = 0;  // 순수 virtual 함수
    virtual void ShowSalaryInfo() const = 0;  // 순수 virtual 함수
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

// 해외 영업직 클래스
// - 리스크 A: 영업직의 기본급여와 인센티브 합계 총액의 30%를 추가로 지급힌다.
// - 리스크 B: 영업직의 기본급여와 인센티브 합계 총액의 20%를 추가로 지급힌다.
// - 리스크 C: 영업직의 기본급여와 인센티브 합계 총액의 10%를 추가로 지급힌다.
namespace RISK_LEVEL {
    enum { RISK_A = 30, RISK_B = 20, RISK_C = 10 };
}

class ForeignSalesWorker : public SalesWorker {
private:
    const int riskLevel;  // 위험 노출도
public:
    ForeignSalesWorker(const char* name, int money, double ratio, int risk)
        : SalesWorker(name, money, ratio), riskLevel(risk) {
    }
    int GetRiskPay() const {
        return int(SalesWorker::GetPay() * (riskLevel / 100.0));
    }
    int GetPay() const {  // PermanentWorker의 GetPay() 함수 호출
        return SalesWorker::GetPay() + GetRiskPay();
    }
    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << SalesWorker::GetPay() << endl;
        cout << "risk pay: " << GetRiskPay() << endl;
        cout << "sum: " << GetPay() << endl;
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

    // 해외 영업직 등록
    ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
    fseller1->AddSalesResult(7000);  // 영업실적 7000
    handler.AddEmployee(fseller1);

    ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
    fseller2->AddSalesResult(7000);  // 영업실적 7000
    handler.AddEmployee(fseller2);

    ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
    fseller3->AddSalesResult(7000);  // 영업실적 7000
    handler.AddEmployee(fseller3);

    // 이번 달에 지불해야 할 급여의 정보
    handler.ShowAllSalaryInfo();

    return 0;
}
