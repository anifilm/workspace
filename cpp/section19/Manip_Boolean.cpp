// Section 19
// Stream manipulators - Boolean
// boolalpha and no boolalpha 

#include <iostream>
#include <iomanip>			// Must include for manipulators

using namespace std;

int main() {

	cout << "noboolalpha - default (10 == 10): " << (10 == 10) << endl;
	cout << "noboolalpha - default (10 == 20): " << (10 == 20) << endl;

	// Set to true/false formatting
	cout << boolalpha;		// change to true/false
	cout << "boolalpha - default (10 == 10): " << (10 == 10) << endl;
	cout << "boolalpha - default (10 == 20): " << (10 == 20) << endl;

	// setting still stays for future boolean insertions
	cout << "boolalpha - default (10 == 10): " << (10 == 10) << endl;
	cout << "boolalpha - default (10 == 20): " << (10 == 20) << endl;

	// Toggle to 0/1
	cout << noboolalpha;
	cout << "noboolalpha - default (10 == 10): " << (10 == 10) << endl;
	cout << "noboolalpha - default (10 == 20): " << (10 == 20) << endl;

	// Set back to ture/false using setf method
	cout.setf(ios::boolalpha);
	cout << "boolalpha - default (10 == 10): " << (10 == 10) << endl;
	cout << "boolalpha - default (10 == 20): " << (10 == 20) << endl;

	// reset to default which is 0/1
	cout << resetiosflags(ios::boolalpha);
	cout << "default - default (10 == 10): " << (10 == 10) << endl;
	cout << "default - default (10 == 20): " << (10 == 20) << endl;

	cout << endl;	
	return 0;
}