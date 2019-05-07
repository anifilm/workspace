#ifndef _LIGER_H_
#define _LIGER_H_
#include "Lion.h"
#include "Tiger.h"

class Liger : public Lion, public Tiger {
public:
    Liger(int age);
};

#endif // _LIGER_H_