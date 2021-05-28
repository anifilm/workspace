// reinterpret_cast: 상관없는 자료형으로의 형 변환
#include <iostream>

using namespace std;

int main() {

	int num = 0x010203;
	char* ptr = reinterpret_cast<char*>(&num);

	for (int i = 0; i < sizeof(num); i++)
		cout << static_cast<int>(*(ptr + i)) << endl;

	return 0;
}
