#ifndef _BAT_H_
#define _BAT_H_
#include "IFlyable.h"
#include "IWalkable.h"

class Bat : public IFlyable, public IWalkable {
public:
    void Fly() const;
    void Walk() const;
};

#endif // _BAT_H_