#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {

	cout << "+------------------------------+" << endl;
	cout << "|     Print Record Example     |" << endl;
	cout << "+------------------------------+" << endl;

	string firstName;
	string lastName;
	string studentID;

	int score;

	istringstream inputStream("Pope Kim A12345678 90");
	ostringstream outputStream;

	inputStream >> firstName >> lastName >> studentID >> score;
	outputStream << firstName << " " << lastName << " " << studentID << " " << score;
	cout << outputStream.str() << endl;
}