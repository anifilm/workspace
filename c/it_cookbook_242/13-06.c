#include <stdio.h>

struct person {
    char name[10];
    int age;
};

int over_twenty(const struct person *p) {
    if (p->age > 20)
        return 1;
    else
        return 0;
}

int main() {

    struct person s1, s2 = {"Jay", 24};

    s1 = s2;
    printf("s1's name is %s.\n", s1.name);

    if (over_twenty(&s1))
        printf("%s is over twenty.\n", s1.name);

    return 0;
}
