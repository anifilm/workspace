// Section 20
// Stack

#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

// This function display a stack of
// by repeatedly topping and popping the stack
// Note theat the stack is passed in by value
// so we don't affect the passed in stack
template <typename T>
void display(stack<T> s) {
	cout << "[ ";
	while (!s.empty()) {
		T elem = s.top();
		s.pop();
		cout << elem << " ";
	}
	cout << "]" << endl;
}

int main() {

	stack<int> s1;
	stack<int, vector<int>> s2;
	stack<int, list<int>> s3;
	stack<int, deque<int>> s4;

	for (int i: {1, 2, 3, 4, 5})
		s1.push(i);
	display(s1);

	s1.push(100);
	display(s1);

	s1.pop();
	s1.pop();
	display(s1);

	while (!s1.empty())
		s1.pop();
	display(s1);

	cout << "Size: " << s1.size() << endl;

	s1.push(10);
	display(s1);

	s1.top() = 100;
	display(s1);

	cout << endl;	
	return 0;
}