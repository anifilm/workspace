#ifndef _CAT_H_
#define _CAT_H_
#include "Animal.h"

class Cat : public Animal {
public:
    Cat(int age);

    virtual void Move() const;
    virtual void Speak() const;
};

#endif // _CAT_H_