// Section 20
// Queue

#include <iostream>
#include <queue>

using namespace std;

// This function display a queue of
// by repeatedly removing element from the front
// Note theat the queue is passed in by value
// so we don't affect the passed in queue
template <typename T>
void display(std::queue<T> q) {
	cout << "[ ";
	while (!q.empty()) {
		T elem = q.front();
		q.pop();
		cout << elem << " ";
	}
	cout << "]" << endl;
}

int main() {

	std::queue<int> q;

	for (int i: {1, 2, 3, 4, 5})
		q.push(i);
	display(q);

	cout << "front: " << q.front() << endl;
	cout << "back: " << q.back() << endl;

	q.push(100);
	display(q);

	q.pop();
	q.pop();
	display(q);

	while (!q.empty())
		q.pop();
	display(q);

	cout << "Size: " << q.size() << endl;

	q.push(10);
	q.push(100);
	q.push(1000);
	display(q);

	cout << "front: " << q.front() << endl;
	cout << "back: " << q.back() << endl;

	q.front() = 5;
	q.back() = 5000;
	display(q);

	cout << "front: " << q.front() << endl;
	cout << "back: " << q.back() << endl;

	cout << endl;	
	return 0;
}