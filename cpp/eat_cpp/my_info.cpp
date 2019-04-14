#include <iostream>

using namespace std;

int main() {

	int user_input;

	cout << "나의 정보를 표시합니다." << endl;
	cout << "1. 이름" << endl;
	cout << "2. 나이" << endl;
	cout << "3. 성별" << endl;

	cout << endl << "9. 나가기" << endl;

	cout << endl << "번호를 선택하세요: ";
	cin >> user_input;

	switch (user_input) {
		case 1:
			cout << endl << "임채영" << endl;
			break;
		case 2:
			cout << endl << "42세" << endl;
			break;
		case 3:
			cout << endl << "남성" << endl;
			break;
		default:
			cout << endl << "잘못 입력 하셨습니다." << endl;
			break;
	}

	cout << endl << "프로그램을 종료합니다." << endl;
	return 0;
}

