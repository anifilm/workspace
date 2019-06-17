#include <iostream>
#include "Tiger.h"

Tiger::Tiger(int age)
    : mAge(age) {
}

void Tiger::PretendIAmAZebra() const {
	std::cout << "I Has Zebra Stripes" << std::endl;
}