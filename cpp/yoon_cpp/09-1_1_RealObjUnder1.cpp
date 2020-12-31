// 객체 안에 정말로 멤버 함수가 존재하는가?
#include <iostream>

using namespace std;

class Data {
private:
    int data;
public:
    Data(int num) : data(num) {}
    void ShowData() { cout << "Data: " << data << endl; }
    void Add(int num) { data += num; }
};

int main() {

    Data obj(15);
    obj.Add(17);
    obj.ShowData();

    return 0;
}
