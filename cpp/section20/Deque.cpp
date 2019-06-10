// Section 20
// Deque

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

// template function to display any deque
template <typename T>
void display(const deque<T> &d) {
	cout << "[ ";
	for (const auto &elem: d)
		cout << elem << " ";
	cout << "]" << endl;
}

void test1() {
	cout << "\n== Test1 ==============================" << endl;
	deque<int> d {1, 2, 3, 4, 5};
	display(d);

	d = {2, 4, 5, 6};
	display(d);

	deque<int> d2 (10, 100);			// ten 100s in the vector
	display(d2);

	d[0] = 100;
	d.at(1) = 200;

	display(d);
}

void test2() {
	cout << "\n== Test3 ==============================" << endl;
	deque<int> d {0, 0, 0};
	display(d);

	// push and pops
	d.push_back(10);
	d.push_back(20);
	display(d);

	d.push_front(100);
	d.push_front(200);
	display(d);

	cout << "Front: " << d.front() << endl;
	cout << "Back: " << d.back() << endl;
	cout << "Size: " << d.size() << endl;

	d.pop_back();
	d.pop_front();
	display(d);
}

void test3() {
	cout << "\n== Test3 ==============================" << endl;
	vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	deque<int> d;

	// insert all even numbers into the back of a deque and all
	// odd numbers into the front
	for (const auto &elem: vec) {
		if (elem % 2 == 0)
			d.push_back(elem);
		else
			d.push_front(elem);
	}
	display(d);
}

void test4() {
	cout << "\n== Test4 ==============================" << endl;
	vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	deque<int> d;

	// push front vs. back ordering
	for (const auto &elem: vec) {
		d.push_front(elem);
	}
	display(d);

	d.clear();

	for (const auto &elem: vec) {
		d.push_back(elem);
	}	
	display(d);
}

void test5() {
	cout << "\n== Test5 ==============================" << endl;
	vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	deque<int> d;

	// Same as test4 using set::copy
	std::copy(vec.begin(), vec.end(), std::front_inserter(d));
	display(d);

	d.clear();

	std::copy(vec.begin(), vec.end(), std::back_inserter(d));
	display(d);
}

int main() {

	test1();
	// test2();
	// test3();
	// test4();
	// test5();

	cout << endl;	
	return 0;
}