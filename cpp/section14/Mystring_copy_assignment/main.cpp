// Section 14
// Mystring - Overloading copy assignment
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {

	Mystring a {"Hello"};               // overloaded constructor
    Mystring b;	                        // no-args constructor
    b = a;								// copy assignment

    b = "This is a test";				// b.operator = ("This is a test");

    Mystring empty;					    // no-arges constructor
    Mystring larry("Larry");            // overloaded constructor
    Mystring stooge {larry};            // copy constructor
    Mystring stooges;					// no-arges constructor

    empty = stooge;					    // copy assignment operator

    empty.display();					// Larry : 5
    larry.display();					// Larry : 5
    stooge.display();					// Larry : 5
    empty.display();					// Larry : 5

    stooges = "Larry, Moe, and Curly";
    stooges.display();					// Larry, Moe, and Curly : 21

    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    cout << "== Loop1 ====================" << endl;
    for (const Mystring &s: stooges_vec)
    	s.display();					// Larry
    									// Moe
    									// Curly
    cout << "== Loop2 ====================" << endl;
    for (Mystring &s: stooges_vec)
    	s = "Changed";					// copy assignment
	cout << "== Loop3 ====================" << endl;
	for (const Mystring &s: stooges_vec)
		s.display();					// Changed
										// Changed
										// Changed
	
    return 0;
}