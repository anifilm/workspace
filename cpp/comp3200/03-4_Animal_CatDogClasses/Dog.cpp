#include <iostream>
#include "Dog.h"

Dog::Dog(int age)
    : Animal(age) {
}

std::string Dog::Bark() const { return std::string("BowWow"); }