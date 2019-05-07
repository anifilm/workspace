#include <iostream>
#include "Tiger.h"

Tiger::Tiger(int age)
    : Animal(age) {
}

void Tiger::PretendToBeZebra() const {
    std::cout << "I has zera stripes" << std::endl;
}