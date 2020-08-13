#include <stdio.h>

char copy_str(char *dest, const char *src);

int set_human(struct TEST *a, int age, int gender, const char *name);

struct TEST {

    int age;
    int gender;

    char name[20];
};

int main() {

    struct TEST human;

    set_human(&human, 42, 1, "Lim");

    printf("AGE: %d // Gender: %d // Name: %s\n", human.age, human.gender, human.name);

    return 0;
}

int set_human(struct TEST *a, int age, int gender, const char *name) {

    a->age = age;
    a->gender = gender;

    copy_str(a->name, name);

    return 0;
}

char copy_str(char *dest, const char *src) {

    while (*src) {

        *dest = *src;

        src++;
        dest++;
    }

    *dest = '\0';

    return 1;
}