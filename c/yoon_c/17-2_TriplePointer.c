// 이중 포인터를 가리키는 삼중 포인터
#include <stdio.h>

int main() {

    int num = 100;
    int* ptr = &num;
    int** dptr = &ptr;
    int*** tptr = &dptr;

    printf("%d %d\n", **dptr, ***tptr);
    printf("\n");

    printf("%p\n", &num);
    printf("%p\n", ptr);
    printf("%p\n", *dptr);
    printf("%p\n", **tptr);

    return 0;
}

/*

int*** tptr -> &dptr
       tptr -> dptr address
      *tptr -> dptr -> ptr address
     **tptr -> dptr -> ptr -> num address
    ***tptr -> dptr -> ptr -> num value 100

*/
