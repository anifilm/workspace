// Section 20
// Function templates

#include <iostream>
#include <string>

using namespace std;

template <typename T>
T my_min(T a, T b) {
	return (a < b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b) {
	cout << a << " " << b << endl;
}

struct Person {
	string name;
	int age;
	bool operator<(const Person &rhs) const {
		return this->age < rhs.age;
	}
};

ostream &operator<<(ostream &os, const Person &p) {
	os << p.name;
	return os;
}

template <typename T>
void my_swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {

	int x {100};
	int y {200};

	cout << x << ", " << y << endl;

	my_swap(x, y);
	cout << x << ", " << y << endl;

	Person p1 {"Curly", 15};
	Person p2 {"Moe", 30};

	Person p3 = my_min(p1, p2);
	cout << p3.name << " is younger" << endl;

	func(p1, p2);

	cout << my_min<int>(2, 3) << endl;				// 2
	cout << my_min(2, 3) << endl;					// 2
	cout << my_min('A', 'B') << endl;				// A
	cout << my_min(12.5, 9.2) << endl;				// 9.2
	cout << my_min(5 + 2 * 2, 7 + 40) << endl;		// 9

	func<int, int>(10, 20);
	func(10, 20);
	func<char, double>('A', 12.4);
	func('A', 12.4);
	func(1000, "Testing");
	func(2000, string {"Frank"});

	cout << endl;	
	return 0;
}