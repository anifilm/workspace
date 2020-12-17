// Section 17
// Custom deleters

#include <iostream>
#include <memory>

using namespace std;

class Test {
private:
    int data;

public:
    Test() : data {0} { cout << "Test constructor (" << data << ")" << endl; }
    Test(int data) : data {data} { cout << "Test constructor (" << data << ")" << endl; }
    int get_data() const { return  data; }
    ~Test() { cout << "Test destructor (" << data << ")" << endl; }
};

void my_deleter(Test* ptr) {
    cout << "Using my custom function deleter" << endl;
    delete ptr;
}

int main() {
    {
        // Using a function
        shared_ptr<Test> ptr1 (new Test(100), my_deleter);
    }

    cout << "\n===================================" << endl;
    {
        // Using a Lambda expression
        shared_ptr<Test> ptr2 (new Test(1000), [] (Test* ptr) {
            cout << "Using my custom lambda deleter" << endl;
        });
    }

    cout << endl;
    return 0;
}
