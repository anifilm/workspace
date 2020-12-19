/*
Q12
컴퓨터의 주기억장치를 모델링하는 클래스 Ram을 구현하려고 한다. Ram 클래스는 데이터가
기록될 메모리 공간과 크기 정보를 가지고, 주어진 주소에 데이터를 기록하고 (write),
주어진 주소로부터 데이터를 읽어 온다 (read). Ram 클래스는 다음과 같이 선언된다.
  (Ram 클래스 생략...)

다음 main() 함수는 100번지에 20을 저장하고 101번지에 30을 저장한 후, 100번지와 101
번지의 값을 읽고 더하여 102번지에 저장하는 코드이다.
  (main() 함수, 실행 결과 생략...)

실행 결과를 참고하여 Ram.h, Ram.cpp, main.cpp로 헤더 파일과 cpp 파일을 분리하여
프로그램을 완성하라.
*/
#include <iostream>

using namespace std;

class Ram {
private:
    char mem[100 * 1024];   // 100KB 메모리, 한 번지를 한 바이트이므로 char 타임 사용
    int size;
public:
    Ram();  // mem 배열을 0으로 초기화하고 size를 100 * 1024로 초기화
    ~Ram(); // "메모리 제거됨" 문자열 출력
    char read(int address); // address 주소의 메모리 바이트 리턴
    void write(int address, char value);    // address 주소에 한 바이트로 value 저장
};

Ram::Ram() {
    size = 100 * 1024;
    for (int i = 0; i < size; i++)
        mem[i] = 0;
}

Ram::~Ram() { cout << "메모리 제거됨" << endl; }

char Ram::read(int address) {
    return mem[address];
}

void Ram::write(int address, char value) {
    mem[address] = value;
}

int main() {

    Ram ram;
    ram.write(100, 20);     // 100번지에 20 저장
    ram.write(101, 30);     // 101번지에 30 저장
    char res = ram.read(100) + ram.read(101);   // 20 + 30 = 50
    ram.write(102, res);    // 102번지에 50 저장
    cout << "102번지의 값 = " << (int)ram.read(102) << endl;    // 102번지 값 출력

    return 0;
}
