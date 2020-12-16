#include <iostream>
#include "Lion.h"

Lion::Lion(int age)
    : Animal(age) {
}

void Lion::ShowOffBeautifulHair() const {
    std::cout << "I'm too sexy" << std::endl;
}