// Section 17
// Challenge

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test {
private:
    int data;

public:
    Test(): data {0} { cout << "Test constructor (" << data << ")" << endl; }
    Test(int data): data {data} { cout << "Test constructor (" << data << ")" << endl; }
    int get_data() const { return data; }
    ~Test() { cout << "Test destructor (" << data << ")" << endl; }
};

// Function prototypes
// unique_ptr<vector<shared_ptr<Test>>> make();
auto make();
void fill(vector<shared_ptr<Test>>& vec, int num);
void display(const vector<shared_ptr<Test>>& vec);

auto make() {
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>>& vec, int num) {
    int temp;
    for (int i = 1; i <= num; i++) {
        cout << "Enter data point [" << i << "] : ";
        cin >> temp;

        vec.push_back(make_shared<Test> (temp));
    }
}

void display(const vector<shared_ptr<Test>>& vec) {
    cout << "\nDisplaying vector data" << endl;
    cout << "======================" << endl;
    for (const auto& ptr : vec)
        cout << ptr->get_data() << endl;

    cout << "======================" << endl;
}

int main() {

    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);

    cout << endl;
    return 0;
}
