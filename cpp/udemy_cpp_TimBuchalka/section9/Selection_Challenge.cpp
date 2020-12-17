// Section 9
// Challenge
/*
    This callenge os about a collection (list) of integers and allowing the user
    to select option from a menu to perform operations on the list.

    Your program should display a menu options to the user as follows:

    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:

The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.

If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should dislay "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brakets separated by a space.
For example, [ 1 2 3 4 5 ]

If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, '5 added',
Duplicate list entries are OK

If the user enters 'M' or 'm' you should calcuate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calulate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1], you should display, "The smallest number is 1"
If the list si empty tou should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye' and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, besoure th test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    bool done = false;
    vector<int> numbers;
    char user_choice;
    int number_to_add;
    int sum = 0, min = 0, max = 0;

    while (!done) {

        cout << "\nYour program should display a menu options to the user as follows:" << endl;

        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nEnter your choice: ";
        cin >> user_choice;

        switch (user_choice) {
            case 'p':
            case 'P':
                if (numbers.size() != 0) {
                    cout << "\n[ ";
                    for (int nums : numbers)
                        cout << nums << " ";
                    cout << "]" << endl;
                } else
                    cout << "\n[] - the list is empty" << endl;
                break;
            case 'a':
            case 'A':
                cout << "\nEnter an integer to add to the list: ";
                cin >> number_to_add;
                cout << endl << number_to_add << " added" << endl;
                numbers.push_back(number_to_add);
                break;
            case 'm':
            case 'M':
                if (numbers.size() != 0) {
                    for (int nums : numbers)
                        sum += nums;
                    cout << "\nThe mean is " << static_cast<double>(sum)/numbers.size() << endl;
                } else
                    cout << "\nUnable to calulate the mean - no data" << endl;
                break;
            case 's':
            case 'S':
                min = numbers.at(0);
                if (numbers.size() != 0) {
                    for (int nums : numbers)
                        if (nums < min)
                            min = nums;
                    cout << "\nThe smallest number is " << min << endl;
                } else
                    cout << "\nUnable to determine the smallest number - list is empty" << endl;
                break;
            case 'l':
            case 'L':
                max = numbers.at(0);
                if (numbers.size() != 0) {
                    for (int nums : numbers)
                        if (nums > max)
                            max = nums;
                    cout << "\nThe largest number is " << max << endl;
                } else
                    cout << "\nUnable to determine the largest number - list is empty" << endl;
                break;
            case 'q':
            case 'Q':
                cout << "\nGoodbye!" << endl;
                done = true;
                break;
            default:
                cout << "\nUnknown selection, please try again" << endl;
        }
    }

    cout << endl;
    return 0;
}
