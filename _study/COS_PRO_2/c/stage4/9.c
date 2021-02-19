#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    int count = 0;
    int i, j;
    int h, u, d, l, r;
    for (i = 0; i < height_len; i++) {
        for (j = 0; j < height_len; j++) {
            h = height[i][j];
            u = (i==0) ? 9:height[i-1][j];
            d = (i==height_len-1) ? 9:height[i+1][j];
            l = (j==0) ? 9:height[i][j-1];
            r = (j==height_len-1) ? 9:height[i][j+1];
            if (h < u && h < d && h < l && h < r)
                count++;
            printf("%d %d %d \n", 0,u,0);
            printf("%d %d %d \n", l,h,r);
            printf("%d %d %d \n", 0,d,0);
        }
        printf("\n");
    }
    return count;
}

int main() {
    int height[4][4] = {
        {3, 6, 2, 8},
        {7, 3, 4, 2},
        {8, 6, 7, 3},
        {5, 3, 2, 9}
    };
    int height_len = 4;
    int ret = solution(height, height_len = 4);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
