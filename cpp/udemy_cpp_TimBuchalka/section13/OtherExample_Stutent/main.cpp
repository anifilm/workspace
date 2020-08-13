#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

void fillVector(vector<Student>&);
// fillVector - fill in student information
// @param vector<Student>& - student in class

void printVector(const vector<Student>&);
// printVector - pritns the information of all students
// @param const vector<Student>& - students in class

int main() {

    vector<Student> myClass;

    fillVector(myClass);
    printVector(myClass);

    return 0;
}

void fillVector(vector<Student> &newMyClass) {

    string name;
    char grade;

    int classSize;

    cout << "How many students are in your class? ";
    cin >> classSize;

    for (int i {0}; i < classSize; i++) {
        cout << "Student Name: ";
        cin >> name;
        cout << "Student Grade: ";
        cin >> grade;

        Student newStudent(name, grade);
        newMyClass.push_back(newStudent);

        cout << endl;
    }
}

void printVector(const vector<Student> &newMyClass) {

    cout << "\n===============================" << endl;

    size_t size = newMyClass.size();

    for (size_t i {0}; i < size; i++) {
        cout << "Student Name: " << newMyClass[i].getName() << endl;
        cout << "Studnet Grade: " << newMyClass[i].getGrade() << endl;

        cout << endl;
    }
    cout << "===============================" << endl;
}