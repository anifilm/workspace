// Section 17
// Shared Pointers

#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

class Test {
private:
	int data;
	
public:
	Test(): data {0} { cout << "Test constructor (" << data << ")" << endl; }
	Test(int data): data {data} { cout << "Test constructor (" << data << ")" << endl; }
	int get_data() const { return  data; }
	~Test() { cout << "Test destructor (" << data << ")" << endl; }
};

void func(shared_ptr<Test> p) {
	cout << "Use count: " << p.use_count() << endl;
}

int main() {

	// use_count - the number of shared_ptr objects
	// managing the heap object

	// shared_ptr<int> p1 { new int {100} };
	// cout << "Use count: " << p1.use_count() << endl;		// 1

	// shared_ptr<int> p2 { p1 };		// shared ownership
	// cout << "Use count: " << p1.use_count() << endl;		// 2

	// p1.reset();		// decrement the use_count; p1 is nulled out
	// cout << "Use count: " << p1.use_count() << endl;		// 0
	// cout << "Use count: " << p2.use_count() << endl;		// 1

	// cout << "\n=======================================================" << endl;
	// shared_ptr<Test> ptr = make_shared<Test> (100);
	// func(ptr);
	// cout << "Use count: " << ptr.use_count() << endl;
	// {
	// 	shared_ptr<Test> ptr1 = ptr;
	// 	cout << "Use count: " << ptr.use_count() << endl;
	// 	{
	// 		shared_ptr<Test> ptr2 = ptr;
	// 		cout << "Use count: " << ptr.use_count() << endl;
	// 		ptr.reset();
	// 	}
	// 	cout << "Use count: " << ptr.use_count() << endl;
	// }
	// cout << "Use count: " << ptr.use_count() << endl;

	cout << "\n=======================================================" << endl;
	shared_ptr<Account> acc1 = make_shared<Trust_Account> ("Larry", 10000, 3.1);
	shared_ptr<Account> acc2 = make_shared<Checking_Account> ("Moe", 5000);
	shared_ptr<Account> acc3 = make_shared<Savings_Account> ("Curly", 6000);

	vector<shared_ptr<Account>> accounts;
	accounts.push_back(acc1);
	accounts.push_back(acc2);
	accounts.push_back(acc3);
	
	for (const auto &acc: accounts) {
		cout << *acc << endl;\
		cout << "Use count: " << acc.use_count() << endl;
	}

	cout << "=======================================================" << endl;

	return 0;
}