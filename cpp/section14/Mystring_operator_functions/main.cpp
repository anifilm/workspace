// Section 14
// Mystring - Overloading operator as non-member (global) methods
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {

    Mystring larry {"Larry"};
    larry.display();                        // Larry : 5

    larry = -larry;
    larry.display();                        // larry : 5

    cout << boolalpha << endl;
    Mystring moe {"Moe"};
    Mystring stooge = larry;

    cout << (larry == moe) << endl;         // false
    cout << (larry == stooge) << endl;      // true

    // Mystring stooges = larry + "Moe";
    Mystring stooges = "Larry" + moe;       // Now ok with non-member function
    stooges.display();                      // LarryMoe :c8

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();                  // Moe Larry : 9

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();                // Moe larry Curly : 15
	
    cout << endl;
    return 0;
}