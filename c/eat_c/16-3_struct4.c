// 멤버를 쉽게 초기화 하기
#include <stdio.h>

struct Human {
    int age;
    int height;
    int weight;
    int gender;
};

void Print_Status(struct Human human);

int main() {

    struct Human Adam = {31, 177, 68, 1};
    struct Human Eve = {28, 164, 51, 2};

    Print_Status(Adam);
    Print_Status(Eve);

    return 0;
}

void Print_Status(struct Human human) {
    if (human.gender == 1)
        printf("Male\n");
    else
        printf("Female\n");

    printf("Age: %d, Height: %d, Weight: %d\n", human.age, human.height, human.weight);

    if (human.gender == 1 && human.height >= 180)
        printf("HE IS A WINNER!! \n");
    else if (human.gender == 1 && human.height < 180)
        printf("HE IS A LOSER!! \n");
    printf("---------------------------------\n");
}
