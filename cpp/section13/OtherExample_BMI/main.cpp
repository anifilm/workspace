#include <iostream>
#include <string>
#include "BMI.h"

using namespace std;

int main() {

    string name;
    int height;
    double weight;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your height (cm): ";
    cin >> height;

    cout << "Enter your weight (kg): ";
    cin >> weight;

    // BMI Student_1(name, height, weight);

    // cout << "\nPatient Name: " << Student_1.getName() << endl;
    // cout << "Height: " << Student_1.getHeight() << endl;
    // cout << "Weight: " << Student_1.getWeight() << endl;

    BMI Student_2;

    Student_2.setName(name);
    Student_2.setHeight(height);
    Student_2.setWeight(weight);

    cout << "\nPatient Name: " << Student_2.getName() << endl;
    cout << "Height: " << Student_2.getHeight() << endl;
    cout << "Weight: " << Student_2.getWeight() << endl;
    cout << "BMI: " << Student_2.calculateBMI() << endl;

    cout << endl;
    return 0;
}