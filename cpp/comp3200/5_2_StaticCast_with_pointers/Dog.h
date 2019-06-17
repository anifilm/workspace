#ifndef _DOG_H_
#define _DOG_H_
#include "Animal.h"

class Dog : public Animal {
private:
	char *mHomeAddress;

public:
    Dog(int age, const char *address);
    virtual ~Dog();

    const char* GetAddress() const;
};

#endif // _DOG_H_