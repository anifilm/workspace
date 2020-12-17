// Section 14
// Mystring - Overloading operator as member methods
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {

    cout << boolalpha << endl;

    Mystring larry = "Larry";
    Mystring moe = "Moe";

    Mystring stooge = larry;
    larry.display();                        // Larry : 5
    moe.display();                          // Moe : 3

    cout << (larry == moe) << endl;         // false
    cout << (larry == stooge) << endl;      // true

    larry.display();                        // Larry : 5
    Mystring larry2 = -larry;
    larry2.display();                       // larry : 5

    Mystring stooges = larry + "Moe";       // ok with member function
//  Mystring stooges = "Larry" + moe;       // Compiler error

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();                  // Moe Larry : 9

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();                // Moe Larry Curly : 15

    cout << endl;
    return 0;
}
