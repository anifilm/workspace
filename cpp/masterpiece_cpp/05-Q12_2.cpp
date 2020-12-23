/*
Q12
다음은 학과를 나타내는 Dept 클래스와 이를 활용하는 main()을 보여준다.
  (Dept클래스, main() 함수 생략...)

  (1) main()의 실행 결과가 다음과 같이 되도록 Dept 클래스에 멤버들을 모두 구현하고,
      전체 프로그램을 완성하라.

  10개 점수 입력: 10 20 30 40 50 60 70 80 90 100
  60점 이상은 4명

  (2) Dept 클래스에서 복사 생성자 Dept(const Dept& dept);가 작성되어 있지 않은 경우,
      컴파일은 되지만 프로그램 실행 끝에 런타임 오류가 발생한다. (복사 생성자를 뺀 채
      실행해 보라.) 위의 코드 어느 부분이 실행될 때 복사 생성자가 호출되는지 설명하고,
      복사 생성자가 없으면 왜 실행 오류가 발생하는지 설명하라.

  (3) Dept 클래스에 복사 생성자를 제거하라. 복사 생성자가 없는 상황에서도 실행 오류가
      발생하지 않게 하려면 어느 부분을 수정하면 될까? 극히 일부분의 수정으로 해결된다.
      코드를 수정해 보라.
*/
#include <iostream>

using namespace std;

class Dept {
private:
    int size;     // scores 배열의 크기
    int* scores;  // 동적 할당 받을 정수 배열의 주소
public:
    Dept(int size) {  // 생성자
        this->size = size;
        scores = new int[size];
    }
    Dept(const Dept& dept);  // 복사 생성자
    ~Dept();    // 소멸자
    int getSize() { return size; }
    void read();    // size 만큼 키보드에서 정수를 읽어 scores 배열에 저장
    bool isOver60(int index);   // index의 학생 성적이 60보다 크면 true 반환
};

/* (2) 컴파일러가 삽입하는 디폴트 복사 생성자 코드
Dept::Dept(const Dept& dept) {
    this->size = dept.size;
    this->scores = dept.scores;
} */

// 사용자 정의 복사 생성자
Dept::Dept(const Dept& dept) {
    this->size = dept.size;
    this->scores = new int[dept.size];
    for (int i = 0; i < dept.size; i++)
        this->scores[i] = dept.scores[i];
}

Dept::~Dept() {
    if (scores)
        delete[] scores;
}

void Dept::read() {
    int num;
    cout << size << "개 점수 입력: ";
    for (int i = 0; i < size; i++) {
        cin >> num;
        scores[i] = num;
    }
}

bool Dept::isOver60(int index) {
    if (scores[index] > 60) return true;
    else return false;
}

/* (2) 함수 호출시 매개 변수에 전달 되는 값에 의해 복사 생성자가 호출 됨 */
int countPass(Dept dept) {
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i)) count++;
    }
    return count;   // dept 학과에 60점 이상으로 통과하는 학생의 수 반환
}

int main() {
    Dept com(10);   // 총 10명이 있는 학과 com
    com.read();  // 총 10명의 학생들의 성적을 키보드로 부터 읽어 scores 배열에 저장
    int n = countPass(com);  // com 학와에 60점 이상으로 통과한 학생의 수를 반환
    cout << "60점 이상은 " << n << "명";
    return 0;
}
