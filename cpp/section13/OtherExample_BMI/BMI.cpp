// Function Definitions
#include "BMI.h"

BMI::BMI() {
    newHeight = 0;
    newWeight = 0.0;
}

BMI::BMI(std::string name, int height, double weight) {
    newName = name;
    newHeight = height;
    newWeight = weight;
}

BMI::~BMI() {
}

std::string BMI::getName() const {
    return newName;
}

int BMI::getHeight() const {
    return newHeight;
}

double BMI::getWeight() const {
    return newWeight;
}

void BMI::setName(std::string name) {
    newName = name;
}

void BMI::setHeight(int height) {
    newHeight = height;
}

void BMI::setWeight(double weight) {
    newWeight = weight;
}

double BMI::calculateBMI() {
    return newWeight / ((newHeight * 0.01) * (newHeight * 0.01));
}