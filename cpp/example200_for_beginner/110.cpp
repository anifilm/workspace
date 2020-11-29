// 동적 메모리 할당 (new, delete)
#include <iostream>

using namespace std;

class Info {
private:
    int* data;
    int* data_arr;

public:
    Info() {
        data = new int;
        data_arr = new int[3];
        cout << "생성자 호출" << endl;
    }

    ~Info() {
        delete data;
        delete[] data_arr;
        cout << "소멸자 호출" << endl;
    }

    void Dispose() {
        delete data;
        delete[] data_arr;
        cout << "Dispose() 메서드 호출" << endl;
    }
};

int main() {

    Info* info = new Info();

    info->Dispose();
    delete info;

    return 0;
}
