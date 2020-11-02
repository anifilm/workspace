// 구조체 안의 구조체
#include <stdio.h>

struct Employee {
    int age;
    int salary;
};

struct Company {
    struct Employee data;
    char name[10];
};

int main() {

    struct Company lim;

    lim.data.age = 43;
    lim.data.salary = 50000000;

    printf("Lim's age   : %d\n", lim.data.age);
    printf("Lim's salary: %d$\n", lim.data.salary);

    return 0;
}
