// 02 구조체 b를 구조체 a로 복사하여 출력하기 위한 프로그램을 완성하라 단, copy_structure
// 함수는 반드시 깊은 복사를 해야 한다.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    int age;
} personType;

void copy_structure(personType* to, const personType* from);
void print_structure(const personType* p);

int main() {

    personType a, b = {"Park", 19};
    print_structure(&b);

    copy_structure(&a, &b);
    print_structure(&a);

    return 0;
}

void copy_structure(personType* to, const personType* from) {
    strcpy(to->name, from->name);
    to->age = from->age;
}

void print_structure(const personType* p) {
    printf("%s %d\n", p->name, p->age);
}
