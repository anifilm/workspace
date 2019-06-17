#ifndef _CAT_H_
#define _CAT_H_
#include "Animal.h"

class Cat : public Animal {
private:
	char *mName;

public:
    Cat(int age, const char* name);
    virtual ~Cat();

    const char* GetName() const;
};

#endif // _CAT_H_