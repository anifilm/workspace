#include "Student.h"

Student::Student() {
    newGrade = ' ';
}

Student::Student(std::string name, char grade) {
    newName = name;
    newGrade = grade;
}

Student::~Student() {
}

std::string Student::getName() const {
    return newName;
}

char Student::getGrade() const {
    return newGrade;
}

void Student::setName(std::string name) {
    newName = name;
}

void Student::setGrade(char grade) {
    newGrade = grade;
}