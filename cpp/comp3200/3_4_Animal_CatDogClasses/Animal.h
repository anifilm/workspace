#ifndef _ANIMAL_H_
#define _ANIMAL_H_

class Animal {
private:
    int mAge;

public:
    Animal();
    Animal(int age);

    int GetAge() const;
};

#endif // _ANIMAL_H_