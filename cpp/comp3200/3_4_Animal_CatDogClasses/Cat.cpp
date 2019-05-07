#include <iostream>
#include "Cat.h"

Cat::Cat(int age)
    : Animal(age) {
}

std::string Cat::Purr() const { return std::string("Purr"); }