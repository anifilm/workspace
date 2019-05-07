#ifndef _CAT_H_
#define _CAT_H_
#include <string>
#include "Animal.h"

class Cat : public Animal {
public:
    Cat(int age);

    std::string Purr() const;
};

#endif // _CAT_H_