// typedef 선언
#include <stdio.h>

typedef int INT;
typedef int* PTR_INT;

typedef unsigned int UINT;
typedef unsigned int* PTR_UINT;

typedef unsigned char UCHAR;
typedef unsigned char* PTR_UCHAR;

int main() {

    INT num1 = 100;			// int num1 = 100;
    PTR_INT pnum1 = &num1;	// int* pnum1 = &num1;

    UINT num2 = 200;		// unsigned int num2 = 200;
    PTR_UINT pnum2 = &num2; // unsigned int* pnum2 = &num2;

    UCHAR ch = 'A';	        // unsigned char ch = 'A';
    PTR_UCHAR pch = &ch;	// unsigned char* pch = &ch;

    printf("%d, %u, %c\n", *pnum1, *pnum2, *pch);

    return 0;
}
