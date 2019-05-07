#ifndef _LION_H_
#define _LION_H_
#include "Animal.h"

class Lion : public Animal {
public:
    Lion(int age);

    void ShowOffBeautifulHair() const;
};

#endif // _LION_H_