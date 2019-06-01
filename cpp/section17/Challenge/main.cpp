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
	~Test() { cout << "Test destructor {" << data << ")" << endl; }
};

// Function prototypes
// unique_ptr<vector<shared_ptr<Test>>> make();
auto make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>> &vec);

auto make() {
	return 1;
}

void fill(vector<shared_ptr<Test>> &vec, int num) {

}

void display(const vector<shared_ptr<Test>> &vec) {

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