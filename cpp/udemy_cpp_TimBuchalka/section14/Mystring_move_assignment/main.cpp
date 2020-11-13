// Section 14
// Mystring - Overloading move constructor and move assignment operator
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {

    Mystring a {"Hello"};               // overloaded constructor
    a = Mystring {"Hola"};              // overloaded constructor then move assignment
    a = "Bonjour";                      // overloaded constructor then move assignment

    Mystring empty;					    // no-arges constructor
    Mystring larry("Larry");            // overloaded constructor
    Mystring stooge {larry};            // copy constructor
    Mystring stooges;					// no-arges constructor

    empty = stooge;                     // copy assignment operator
                                        // stooge is an l-value

    empty = "Funny";				    // copy assignment operator
                                        // "Funny" is and r-value

    empty.display();					// Larry : 5
    larry.display();					// Larry : 5
    stooge.display();					// Larry : 5
    empty.display();					// Larry : 5

    stooges = "Larry, Moe, and Curly";
    stooges.display();					// Larry, Moe, and Curly : 21

    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");     // move constructor
    stooges_vec.push_back("Moe");       // move constructor
    stooges_vec.push_back("Curly");     // move constructor

    cout << "== Loop1 ====================" << endl;
    for (const Mystring& s : stooges_vec)
        s.display();					// Larry
                                        // Moe
                                        // Curly
    cout << "== Loop2 ====================" << endl;
    for (Mystring& s : stooges_vec)
        s = "Changed";					// move assignment

    cout << "== Loop3 ====================" << endl;
    for (const Mystring& s : stooges_vec)
        s.display();					// Changed
                                        // Changed
                                        // Changed
    return 0;
}
