// 구조체의 대입 4 (구조체를 인자로 전달하기, 살짝 업그레이드)
#include <stdio.h>

struct Test {
    int age;
    int gender;
    char name[20];
};

void set_human(struct Test* a, int age, int gender, const char* name);
void copy_str(char* dest, const char* src);

int main() {

    struct Test human;

    // 구조체 human의 주소값을 인자로 전달
    set_human(&human, 43, 1, "Lim");

    printf("Age: %d, Gender: %d, Name: %s\n", human.age, human.gender, human.name);

    return 0;
}

void set_human(struct Test* a, int age, int gender, const char* name) {
    a->age = age;
    a->gender = gender;
    copy_str(a->name, name);
}

void copy_str(char* dest, const char* src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
