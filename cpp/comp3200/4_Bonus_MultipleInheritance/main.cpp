#include <iostream>
#include "Liger.h"

using namespace std;

int main() {

	Liger liger(5);

	liger.ShowOffBeautifulHair();
	liger.PretendToBeZebra();

	cout << "Tiger age: " << liger.Tiger::GetAge() << endl;
	cout << "Lion age: " << liger.Lion::GetAge() << endl;
}