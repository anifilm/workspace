#include <iostream>
#include <cstring>      // for c-stype string functions
#include <cctype>       // for character-based functions

using namespace std;

int main() {

    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];

//  cout << first_name;     // Will likely display garbage!

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "------------------------------" << endl;

    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name);      // copy first_name
    strcat(full_name, " ");             // concatenate full_name and a space
    strcat(full_name, last_name);       // concatenate last_name to full_name
    cout << "\nYour full name is " << full_name << endl;

    cout << endl;
    return 0;
}
