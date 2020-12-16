#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;

int main() {

    Animal* cat = new Cat(3);
    Animal* dog = new Dog(5);

    cat->Move();
    cat->Speak();

    dog->Move();
    dog->Speak();

    delete cat;
    delete dog;

    return 0;
}
