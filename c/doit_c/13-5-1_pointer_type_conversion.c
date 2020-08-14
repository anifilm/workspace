#include <stdio.h>

int main() {

    int data = 0x12345678, i;
    char *p = (char *)&data;

    for (i = 0; i < 4; i++) {
        printf("%X, ", *p);
        p++;
    }
	
	return 0;
}
