#ifndef _TIGER_H_
#define _TIGER_H_
#include "Animal.h"

class Tiger : public Animal {
public:
    Tiger(int age);

    void PretendToBeZebra() const;
};

#endif // _TIGER_H_