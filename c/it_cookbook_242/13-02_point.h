struct point {
    int x;
    int y;
};

struct rectangle {
    struct point tl;    // top left, 사각형의 좌 상단
    struct point br;    // bottom right, 사각형의 우 하단
};
