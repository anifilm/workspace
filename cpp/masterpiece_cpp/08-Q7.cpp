/*
Q7
아래와 같은 BaseMemory 클래스를 상속받는 ROM(Read Only Memory), RAM 클래스를 작성
하라. BaseMemory에 필요한 코드를 수정 추가하여 적절히 완성하라.
  (BaseMemory 클래스 생략...)

ROM은 읽기 전용 메모리이므로 동작 중에 값을 쓸 수가 없기 때문에, 공장에서 생산할 때
생산자가 요청한 데이터로 초기화하는데 이 작업을 굽는다 (burn)라고 한다. 그러므로
ROM은 반드시 생성자에서 Burn 작업이 일어나야 한다.
다음은 ROM과 RAM 메모리를 생성하고 사용하는 사례이다. ROM의 0번지에서 4번지까지 읽어
RAM 메모리의 0~4번지에 쓰고, 다시 RAM 메모리의 값을 화면에 출력하낟. 전제 프로그램을
완성하라.
    (실행 코드, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class BaseMemory {
private:
    char* mem;
    int size, index;
protected:
    BaseMemory(int size) {
        this->size = size;
        mem = new char[size];
        index = 0; }
    ~BaseMemory() { delete[] mem; }
public:
    void burn(char *mem, int size);
    void write(int index, char c) { mem[index] = c; }
    char read(int index) { return mem[index]; }
};

void BaseMemory::burn(char *mem, int size) {
    if (this->size < index) return;
    for (int i = index; i < index + size; i++) this->mem[i] = mem[i - index];
    index += size;
}

class ROM : public BaseMemory {
public:
    ROM(int cap, char* mem, int size)
        : BaseMemory(cap) {
            burn(mem, size);
    }
};

class RAM : public BaseMemory {
public:
    RAM(int cap) : BaseMemory(cap) {}
};

int main() {

    char x[5] = {'h', 'e', 'l', 'l', 'o'};
    ROM biosROM(1024*10, x, 5);  // 10KB의 ROM 메모리. 배열 x로 초기화됨
    RAM mainMemory(1024*1024);  // 1MB의 RAM 메모리

    // 0번지에서 4번지까지 biosROM에서 읽어 mainMemory에 복사
    for (int i = 0; i < 5; i++)
        mainMemory.write(i, biosROM.read(i));
    for (int i = 0; i < 5; i++)
        cout << mainMemory.read(i);
    cout << endl;

    return 0;
}
