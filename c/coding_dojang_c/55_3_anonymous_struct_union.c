#include <stdio.h>

struct Vector3 {        // 3차원 벡터 좌표
    union {             // 익명 공용체
        struct {        // 익명 구조체
            float x;    // x 좌표
            float y;    // y 좌표
            float z;    // z 좌표
        };
        float v[3];     // 좌표를 배열로 저장
    };
};

int main() {

    struct Vector3 pos;

    for (int i = 0; i < 3; i++) {
        pos.v[i] = 1.0f;
    }

    printf("%f %f %f\n", pos.x, pos.y, pos.z);

    return 0;
}
