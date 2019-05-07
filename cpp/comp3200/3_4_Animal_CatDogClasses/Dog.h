#ifndef _DOG_H_
#define _DOG_H_
#include <string>
#include "Animal.h"

class Dog : public Animal {
public:
    Dog(int age);

    std::string Bark() const;
};

#endif // _DOG_H_