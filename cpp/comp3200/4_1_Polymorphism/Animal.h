#ifndef _ANIMAL_H_
#define _ANIMAL_H_

class Animal {
private:
    int mAge;

public:
    Animal(int age);
    virtual ~Animal();

    virtual void Move() const;
    virtual void Speak() const;

    int GetAge() const;
};

#endif // _ANIMAL_H_