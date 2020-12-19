#include "Exp.h"

Exp::Exp() {
    base = 1;
    exp = 1;
}
Exp::Exp(int b) {
    base = b;
    exp = 1;
}
Exp::Exp(int b, int p) {
    base = b;
    exp = p;
}

int Exp::getValue() {
    int n = 1;
    for (int i = 0; i < exp; i++)
        n *= base;
    return n;
}

int Exp::getBase() {
    return base;
}

int Exp::getExp() {
    return exp;
}

bool Exp::equals(Exp e) {
    if (this->getValue() == e.getValue())
        return true;
    else
        return false;
}
