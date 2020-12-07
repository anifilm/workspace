// 포인터 변수를 가리키는 이중 포인터 변수 (다차원 포인터 변수)
#include <stdio.h>

int main() {

    double num = 3.14;
    double* ptr = &num;
    double** dptr = &ptr;

    printf("%9p %9p\n", ptr, *dptr);
    printf("%9.2lf %9.2lf\n", num, **dptr);

    double* ptr2 = *dptr;   // double* ptr2 = ptr; 와 같은 의미
    *ptr2 = 10.99;

    printf("%9.2lf %9.2lf\n", num, **dptr);
    printf("\n");

    printf("%p\n", &num);
    printf("%p\n", ptr);
    printf("%p\n", *dptr);

    return 0;
}

/*

num -> value 3.14

double   *ptr -> &num
          ptr -> num address
         *ptr -> num value 3.14

double **dptr -> &ptr
         dptr -> ptr address
        *dptr -> ptr -> num address
       **dptr -> ptr -> num value 3.14

*/
