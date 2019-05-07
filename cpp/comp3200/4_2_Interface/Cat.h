#ifndef _CAT_H_
#define _CAT_H_
#include "IWalkable.h"

class Cat : public IWalkable {
public:
    void Walk() const;
};

#endif // _CAT_H_