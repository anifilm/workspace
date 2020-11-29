// 클래스 템플릿 사용하기 (template <class T>)
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
class TemplateDate {
private:
    vector<T> data;
public:
    void Add(T arg) { this->data.push_back(arg); }
    int Size() { return this->data.size(); }
    void Print() {
        for (int i = 0, size = Size(); i < size; i++)
            cout << "data: " << this->data.at(i) << endl;
    }
};

int main() {

    TemplateDate<int> data_int;
    data_int.Add(1);
    data_int.Add(2);
    data_int.Print();

    TemplateDate<string> data_string;
    data_string.Add("Hello");
    data_string.Add("World");
    data_string.Add("!!");
    data_string.Print();

    return 0;
}
