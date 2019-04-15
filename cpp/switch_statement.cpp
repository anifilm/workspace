// Switch Statement

/*
    Ask the user what grade they expect in an exam and
    tell them what they need to score to get it
*/

#include <iostream>

using namespace std;

int main() {

    char letter_grade {};

    cout << "\nEnter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch (letter_grade) {

        case 'a':
        case 'A':
            cout << "\nYou need a 90 or above, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "\nYou need a 80-89 or above, go study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "\nYou need a 70-79 for an average grade" << endl;
            break;
        case 'd':
        case 'D':
            cout << "\nHmm, you should strive for a better grade. All you need is 60-69" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "\nAre you sure (Y/N)? ";
            cin >> confirm;

            if (confirm == 'y' || confirm == 'Y')
                cout << "OK, I guess you didn't study..." << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good- go study!" << endl;
            else
                cout << "Illegal choice" << endl;

            break;
        }

        default:
            cout << "\nSorry, not a valid grade" << endl;
    }

	cout << endl;	
	return 0;
}
