#ifndef _DOG_H_
#define _DOG_H_
#include "Animal.h"

class Dog : public Animal {
public:
    Dog(int age);

    virtual void Move() const;
    virtual void Speak() const;
};

#endif // _DOG_H_