#include <iostream>
#include "Tiger.h"

using namespace std;

int main() {

    Tiger* tiger = new Tiger(5);
    unsigned int intAddress = reinterpret_cast<unsigned int>(tiger);

    cout << "saving address as int: " << intAddress << endl;
    cout << "read int address to pointer" << endl;

    tiger = reinterpret_cast<Tiger*>(intAddress);
    tiger->PretendIAmAZebra();

    delete tiger;

    return 0;
}
