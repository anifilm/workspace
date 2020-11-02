// 구조체의 대입 3 (구조체를 인자로 전달하기)
#include <stdio.h>

struct Test {
    int age;
    int gender;
};

void set_human(struct Test *a, int age, int gender);

int main() {

    struct Test human;

    // 구조체 human의 주소값을 인자로 전달
    set_human(&human, 43, 1);
    printf("Age: %d, Gender: %d\n", human.age, human.gender);

    return 0;
}

void set_human(struct Test *a, int age, int gender) {
    a->age = age;
    a->gender = gender;
}
