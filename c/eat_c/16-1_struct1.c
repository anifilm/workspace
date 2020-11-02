// 구조체의 도입
#include <stdio.h>

struct Human {
    int age;        // 나이
    float height;   // 키
    float weight;   // 몸무게
};

int main() {

    struct Human anifilm;

    anifilm.age = 43;
    anifilm.height = 169.8;
    anifilm.weight = 69.4;

	printf("anifilm에 대한 정보\n");
    printf("나이  : %d세\n", anifilm.age);
    printf("키    : %.1fcm\n", anifilm.height);
    printf("몸무게: %.1fkg\n", anifilm.weight);

	return 0;
}

