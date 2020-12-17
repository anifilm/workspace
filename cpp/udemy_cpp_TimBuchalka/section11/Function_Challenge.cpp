// Scection 11
// Challenge
/*
    Recall the challenge from Section 9 below.
    your challenge for section 11 is to modularize your solution th the Sectin 9
    challenge by refactoring your solution so that it uses functions.

    You devide hot to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.

    Here are a few hints:
      - Create functions for each major function
      - Keep the functions small
      - Remember the Boss/Worker analogy
      - Keep the vector declaration in the main function and pass the vector object
        to any function that requires it

      DO NOT move the vector object outside main and make it a global variable.

      - You can start by defining a function that display the menu
      - You can then define a function that reads the selection from the user and returns it in uppercase
      - Create functions for each menu option
      - Create functions that display the list of numbersm calculates the mean and so forth

    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!

    Finally, don't forget to use function prototypes!

    Good luck -- I know you can do it!
*/

#include <iostream>
#include <vector>

using namespace std;

void display_menu();
char get_choice();

void print_numbers(const vector<int>&);
void add_number(vector<int>&);
void mean_number(vector<int>&);
void smallest_number(vector<int>&);
void largest_number(vector<int>&);
bool quit();
void unknown();

int main() {

    bool done = false;
    vector<int> numbers {};
    char user_choice {};

    while (!done) {
        display_menu();
        user_choice = get_choice();
        switch (user_choice) {
            case 'P':
                print_numbers(numbers);
                break;
            case 'A':
                add_number(numbers);
                break;
            case 'M':
                mean_number(numbers);
                break;
            case 'S':
                smallest_number(numbers);
                break;
            case 'L':
                largest_number(numbers);
                break;
            case 'Q':
                done = quit();
                break;
            default:
                unknown();
        }
    }
    cout << endl;

    return 0;
}

void display_menu() {
    cout << "\nYour program should display a menu options to the user as follows:" << endl;

    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
}

char get_choice() {
    char user_choice {};
    cout << "\nEnter your choice: ";
    cin >> user_choice;
    return toupper(user_choice);
}

void print_numbers(const vector<int>& numbers) {
    if (numbers.size() != 0) {
        cout << "\n[ ";
        for (int nums : numbers)
            cout << nums << " ";
        cout << "]" << endl;
    } else {
        cout << "\n[] - the list is empty" << endl;
    }
}

void add_number(vector<int>& numbers) {
    int number_to_add {};
    cout << "\nEnter an integer to add to the list: ";
    cin >> number_to_add;
    cout << endl << number_to_add << " added" << endl;
    numbers.push_back(number_to_add);
}

void mean_number(vector<int>& numbers) {
    int sum {};
    if (numbers.size() != 0) {
        for (int nums : numbers)
            sum += nums;
        cout << "\nThe mean is " << static_cast<double>(sum) / numbers.size() << endl;
    } else {
        cout << "\nUnable to calulate the mean - no data" << endl;
    }
}

void smallest_number(vector<int>& numbers) {
    int min {};
    min = numbers.at(0);
    if (numbers.size() != 0) {
        for (int nums : numbers)
            if (nums < min)
                min = nums;
        cout << "\nThe smallest number is " << min << endl;
    } else
        cout << "\nUnable to determine the smallest number - list is empty" << endl;
}

void largest_number(vector<int>& numbers) {
    int max {};
    max = numbers.at(0);
    if (numbers.size() != 0) {
        for (int nums : numbers)
            if (nums > max)
                max = nums;
        cout << "\nThe largest number is " << max << endl;
    } else
        cout << "\nUnable to determine the largest number - list is empty" << endl;
}

bool quit() {
    bool done = false;
    cout << "\nGoodbye!" << endl;

    return done = true;
}

void unknown() {
    cout << "\nUnknown selection, please try again" << endl;
}
