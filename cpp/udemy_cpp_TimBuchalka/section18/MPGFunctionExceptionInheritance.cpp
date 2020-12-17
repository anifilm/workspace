// Section 18
// Miles per Gallon - Function - Exception Classes - Inheritance

#include <iostream>

using namespace std;

class DivideByZeroException : public std::runtime_error {
public:
    DivideByZeroException() : std::runtime_error {"Sorry, you can't divide by zero"} {}
};

class NegativeValueException : public std::runtime_error {
public:
    NegativeValueException() : std::runtime_error {"Sorry, one of your parameters in negative"} {}
};

double calulate_mpg(int miles, int gallons) {
    if (gallons == 0)
        throw DivideByZeroException();
    else if (miles < 0 || gallons < 0)
        throw NegativeValueException();
    return static_cast<double>(miles) / gallons;
}

int main() {

    int miles;
    int gallons;
    double miles_per_gallon;

    cout << "Enter the miles driven: ";
    cin >> miles;
    cout << "Enter the gallons used: ";
    cin >> gallons;

    try {
        miles_per_gallon = calulate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch (const DivideByZeroException& ex) {
        cerr << ex.what() << endl;
    }
    catch (const NegativeValueException& ex) {
        cerr << ex.what() << endl;
    }

    cout << "Bye" << endl;
    return 0;
}
