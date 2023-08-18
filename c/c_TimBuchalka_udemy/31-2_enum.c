// Section 5: 31. Enums and Chars
#include <stdio.h>

int main() {

	enum gender {
        male,
        female
    };

    enum gender myGender;

    myGender = male;

	printf("My gender is %d\n", myGender);

	return 0;
}
